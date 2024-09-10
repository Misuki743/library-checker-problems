#include "random.h"
#include <iostream>

using namespace std;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = 0;
    using P = pair<int, int>;
    vector<P> ps;
    while (n < 200000 - 20) {
        int m = gen.uniform(1, 20);
        int base_x = gen.uniform(0, 1'000'000'000 - 10);
        int base_y = gen.uniform(0, 1'000'000'000 - 10);
        for (int i = 0; i < m; i++) {
            int x = gen.uniform(0, 10);
            int y = gen.uniform(0, 10);
            ps.push_back({base_x + x, base_y + y});
        }
        n += m;
    }
    gen.shuffle(ps.begin(), ps.end());
    printf("%d\n", n);
    for (auto p: ps) {
        printf("%d %d\n", p.first, p.second);
    }
    return 0;
}
