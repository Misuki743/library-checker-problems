#include "params.h"
#include "testlib.h"

#include <vector>

int main()
{
    registerValidation();

    const int N = inf.readInt(N_MIN, N_MAX);
    inf.readChar('\n');

    std::vector<int> used(N);
    for (int i = 0; i < N; ++i)
    {
        if (i)
            inf.readSpace();
        int c = inf.readInt(0, N - 1);
        ensuref(used[c] == 0, "this array is not permutation");
        used[c] = 1;
    }
    inf.readChar('\n');
    inf.readEof();
}
