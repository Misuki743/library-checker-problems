#include <cmath>
#include <cstdlib>

#include "../params.h"
#include "base.hpp"
#include "random.h"

int main(int, char *argv[]) {
  const long long seed = std::atoll(argv[1]);
  Random gen(seed);

  int N, Q;
  if (seed < 3) {
    N = gen.uniform<int>(100, N_MAX);
    Q = gen.uniform<int>(100, Q_MAX);
  } else {
    N = N_MAX;
    Q = Q_MAX;
  }

  int sigma;
  if (seed % 3 == 0) {
    sigma = 2;
  } else if (seed % 3 == 1) {
    sigma = std::sqrt(N);
  } else {
    sigma = N / 2;
  }

  generate(gen, N, Q, sigma);

  return 0;
}
