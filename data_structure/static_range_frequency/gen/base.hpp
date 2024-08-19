#include <cassert>
#include <cstdio>
#include <set>
#include <vector>

#include "../params.h"
#include "random.h"

// |{a_i}| = sigma
// P(x \in {a_i}) = p
void generate(Random &gen, const int N, const int Q, const int sigma,
              const double p) {
  std::printf("%d %d\n", N, Q);

  std::vector<int> S;
  std::set<int> s;
  for (int i = 0; i < sigma; i++) {
    while (true) {
      const int a = gen.uniform(A_MIN, A_MAX);
      if (!s.count(a)) {
        s.insert(a);
        S.push_back(a);
        break;
      }
    }
  }

  std::vector<int> a = S;
  while (static_cast<int>(a.size()) < N) {
    a.push_back(S[gen.uniform(0, sigma - 1)]);
  }
  gen.shuffle(a.begin(), a.end());

  for (int i = 0; i < N; i++) {
    if (i != 0) {
      std::printf(" ");
    }
    std::printf("%d", a[i]);
  }
  std::printf("\n");

  for (int i = 0; i < Q; i++) {
    auto [l, r] = gen.uniform_pair(0, N + 1);
    r -= 1;
    int x;
    if (gen.uniform01() < p) {
      x = S[gen.uniform(0, sigma - 1)];
    } else {
      do {
        x = gen.uniform(A_MIN, A_MAX);
      } while (s.count(x));
    }
    std::printf("%d %d %d\n", l, r, x);
  }
}
