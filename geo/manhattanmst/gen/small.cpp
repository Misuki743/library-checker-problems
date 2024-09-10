#include <iostream>
#include "random.h"

using namespace std;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = gen.uniform(1, 10);

    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        int x = gen.uniform(0, 30);
        int y = gen.uniform(0, 30);
        printf("%d %d\n", x, y);
    }
    return 0;
}
