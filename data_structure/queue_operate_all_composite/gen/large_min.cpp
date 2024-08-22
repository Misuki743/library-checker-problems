#include "random.h"
#include <iostream>

using namespace std;

const int MOD = 998244353;
const int Q_MAX = 500'000;

int main(int, char* argv[]) {
    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int q = Q_MAX;
    printf("%d\n", q);

    int length = 0;
    for (int i = 0; i < q; i++) {
        int t = gen.uniform(0, 2);
        if (length == 0 and t == 1) {
            t = 0;
        }
        if (length >= 20) {
            t = 1;
        }
        printf("%d", t);
        if (t == 0) {
            int a = gen.uniform(1, MOD - 1);
            int b = gen.uniform(0, MOD - 1);
            printf(" %d %d", a, b);
            length++;
        } else if (t == 1) {
            length--;
        } else {
            int x = gen.uniform(0, MOD - 1);
            printf(" %d", x);
        }
        printf("\n");
    }
    return 0;
}
