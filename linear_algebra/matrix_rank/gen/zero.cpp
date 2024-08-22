#include <iostream>
#include "random.h"
#include "../params.h"

using namespace std;

int main(int, char* argv[]) {
  long long seed = atoll(argv[1]);
  auto gen = Random(seed);

  int ns[] = {0, 0, 0, 1, NM_MAX};
  int ms[] = {0, 1, NM_MAX, 0, 0};

  int n = ns[seed % 5];
  int m = ms[seed % 5];

  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) { a[i][j] = gen.uniform<int>(0, MOD - 1); }
  }

  printf("%d %d\n", n, m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", a[i][j]);
      if (j + 1 != m) printf(" ");
    }
    printf("\n");
  }

  return 0;
}
