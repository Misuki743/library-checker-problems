#include "random.h"
#include <iostream>
#include <vector>
#include <cassert>
#include "../params.h"

using namespace std;
using ll = long long;

ll f(ll n) {
  ll ret = 1;
  while((ret+1)*(ret+1)<=n)++ret;
  return ret*ret;
}

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    ll N = gen.uniform<ll>(1000LL, N_MAX-10L);
    ll d = gen.uniform<ll>(-3LL, 3L);
    printf("%lld\n", f(N)+d);
    return 0;
}
