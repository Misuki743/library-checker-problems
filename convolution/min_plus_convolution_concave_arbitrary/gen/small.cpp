#include <cstdio>
#include "../params.h"
#include "random.h"
#include <vector>

#include "common.hpp"

int main(int, char* argv[]) {
  long long seed = atoll(argv[1]);
  auto gen = Random(seed);

  int ns[] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
  int ms[] = {1, 2, 3, 1, 2, 3, 1, 2, 3};

  int n = ns[seed % 9];
  int m = ms[seed % 9];

  vector<ll> A = rand_gen(gen, n, -A_MAX, +A_MAX);
  vector<ll> B = rand_B(gen, m);
  upside_down(A);
  out(A, B);

  return 0;
}
