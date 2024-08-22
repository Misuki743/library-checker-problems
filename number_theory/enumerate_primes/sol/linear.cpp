#include <assert.h>
#include <stdio.h>
#include <bitset>

using std::bitset;

constexpr int LIM = 200'000'000;
int lpf[LIM + 10];
int primesLen;
int primes[20'000'010];

int anssLen;
int anss[1'000'010];

int main() {
  int N, A, B;
  scanf("%d%d%d", &N, &A, &B);
  assert(N <= LIM);

  for (int n = 2; n <= N; ++n) {
    if (lpf[n] == 0) {
      lpf[n] = n;
      primes[primesLen++] = n;
    }
    for (int i = 0; i < primesLen && primes[i] <= lpf[n] && primes[i] * n <= N; ++i) {
      lpf[primes[i] * n] = primes[i];
    }
  }

  int pi = 0;
  for (int n = 2; n <= N; ++n) {
    if (lpf[n] == n) {
      if (pi++ % A == B) {
        anss[anssLen++] = n;
      }
    }
  }
  printf("%d %d\n", pi, (pi + A - 1 - B) / A);
  for (int i = 0; i < anssLen; ++i) {
    if (i > 0) printf(" ");
    printf("%d", anss[i]);
  }
  puts("");
  return 0;
}
