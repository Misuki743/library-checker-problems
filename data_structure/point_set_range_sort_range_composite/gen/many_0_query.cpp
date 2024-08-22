#include "random.h"
#include "../params.h"
#include <iostream>

using namespace std;

int main(int, char* argv[]) {
  long long seed = atoll(argv[1]);
  auto gen = Random(seed);

  auto generate_t = [&]() -> int {
    int t = gen.uniform<int>(0, 1000);
    if (t > 3) t = 0;
    return t;
  };

  int n = N_MAX;
  int q = Q_MAX;
  printf("%d %d\n", n, q);

  vector<int> P = gen.choice<int>(n + q, P_MIN, P_MAX);
  gen.shuffle(P.begin(), P.end()); 

  for (int i = 0; i < n; i++) {
    int p = P[i];
    int a = gen.uniform<int>(1, MOD - 1);
    int b = gen.uniform<int>(0, MOD - 1);
    printf("%d %d %d\n", p, a, b);
  }
  for (int i = 0; i < q; i++) {
    int t = generate_t();
    if (t == 0) {
      int idx = gen.uniform<int>(0, n - 1);
      int p = P[n + i];
      int a = gen.uniform<int>(1, MOD - 1);
      int b = gen.uniform<int>(0, MOD - 1);
      printf("%d %d %d %d %d\n", t, idx, p, a, b);
    }
    if (t == 1) {
      auto p = gen.uniform_pair<int>(0, n);
      int x = gen.uniform<int>(0, MOD - 1);
      printf("%d %d %d %d\n", t, p.first, p.second, x);
    }
    if (t == 2 || t == 3) {
      auto p = gen.uniform_pair<int>(0, n);
      printf("%d %d %d\n", t, p.first, p.second);
    }
  }
  return 0;
}
