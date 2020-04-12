#include "random.h"
#include <iostream>
#include "../params.h"

using namespace std;
using ll = long long;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = gen.uniform(1LL,N_MAX);
    int q = gen.uniform(1LL,M_MAX);

    printf("%d %d\n", n, q);
    for (int i = 0; i < n; i++) {
        printf("%d", gen.uniform(0, 998244353));
        if (i != n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
