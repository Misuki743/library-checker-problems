#include "random.h"
#include <iostream>
#include <vector>
#include <cassert>
#include "../params.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    ll N = gen.uniform<ll>(1LL, N_MAX);
    printf("%lld\n", N);
    return 0;
}