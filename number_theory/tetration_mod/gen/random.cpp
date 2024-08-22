#include "random.h"
#include <iostream>

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int t = gen.uniform(1, 1000);
    printf("%d\n", t);
    for (int i = 0; i < t; i++) {
        ll a = gen.uniform(0LL, 1'000'000'000LL);
        ll b = gen.uniform(0LL, 1'000'000'000LL);
        ll m = gen.uniform(1LL, 1'000'000'000LL);
        printf("%lld %lld %lld\n", a, b, m);
    }
    return 0;
}
