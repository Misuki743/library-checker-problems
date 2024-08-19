#include <vector>
#include <iostream>
#include <limits>

#include "random.h"
#include "../params.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

const ull ull_max = numeric_limits<ull>::max();

using Int = __int128_t;

Int mypow(Int a, int k) {
    Int result = 1;
    for (int i = 0; i < k; i++) {
        result *= a;
        if (result >> 64) break;
    }
    return result;
}

// res[i]^i < 2^64 <= (res[i]+1)^i
vector<ull> get_up() {
    vector<ull> res = {0};
    res.push_back(ull_max); // k = 1
    for (int k = 2; k <= 64; k++) {
        ull lw = 0;
        ull up = 1LL << 40;

        while (up - lw > 1) {
            ull mid = (lw + up) / 2;
            if (mypow(mid, k) <= ull_max) {
                lw = mid;
            } else {
                up = mid;
            }
        }

        res.push_back(lw);
    }

    return res;
}

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);
    
    auto up = get_up();

    int t = T_MAX;
    printf("%d\n", t);
    for (int i = 0; i < t; i++) {
        int k = 3;
        ull x = gen.uniform(0ULL, up[k]);
        x = mypow(x, k);

        ull lw = ull(max(Int(0), Int(x) - 10));
        ull up = ull(min(Int(ull_max), Int(x) + 10));

        ull a = gen.uniform(lw, up);

        printf("%llu %d\n", a, k);
    }
    return 0;
}
