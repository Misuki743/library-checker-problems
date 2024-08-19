#include "../params.h"
#include "random.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

int main(int, char* argv[])
{
    long long seed = std::atoll(argv[1]);
    auto gen = Random(seed);
    const int n = gen.uniform(N_MIN, N_SMALL_MAX);
    auto p = gen.perm<int>(n);

    printf("%d\n", n);
    for (int i = 0; i < n; ++i) {
        if (i)
            printf(" ");
        printf("%d", p[i]);
    }
    printf("\n");
}
