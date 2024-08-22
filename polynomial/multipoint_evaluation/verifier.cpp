#include <iostream>

#include "testlib.h"

int main() {
    registerValidation();
    int n = inf.readInt(1, 1 << 17);
    inf.readSpace();
    int m = inf.readInt(1, 1 << 17);
    inf.readChar('\n');
    for (int i = 0; i < n; i++) {
        inf.readInt((i != n - 1) ? 0 : 1, 998244353 - 1);
        if (i != n - 1) inf.readSpace();
    }
    inf.readChar('\n');
    for (int i = 0; i < m; i++) {
        inf.readInt(0, 998244353 - 1);
        if (i != m - 1) inf.readSpace();
    }
    inf.readChar('\n');

    inf.readEof();
    return 0;
}
