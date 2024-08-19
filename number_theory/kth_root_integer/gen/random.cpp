#include "random.h"
#include <iostream>
#include <limits>

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int t = gen.uniform(1, 500'000);
    printf("%d\n", t);
    for (int i = 0; i < t; i++) {
        ull a = gen.uniform(0ULL, numeric_limits<ull>::max());
        int k = gen.uniform(1, 64);

        printf("%llu %d\n", a, k);
    }
    return 0;
}
