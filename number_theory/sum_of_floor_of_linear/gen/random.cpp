#include <iostream>
#include "random.h"

using namespace std;

int main(int, char* argv[]) {


    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int t = gen.uniform(1, 100'000);
    printf("%d\n", t);
    for (int i = 0; i < t; i++) {
        int n = gen.uniform(1, 1'000'000'000);
        int m = gen.uniform(1, 1'000'000'000);
        int a = gen.uniform(0, m - 1);
        int b = gen.uniform(0, m - 1);

        printf("%d %d %d %d\n", n, m, a, b);
    }
    return 0;
}
