## @{keyword.statement}

@{lang.en}
Each test case consists of $T$ cases.

Given $N, M, A, B$. Print $\sum_{i = 0}^{N - 1} floor((A \times i + B) / M)$.
@{lang.ja}
この問題は $T$ ケース与えられます。

$N, M, A, B$ が与えられます。

$\sum_{i = 0}^{N - 1} floor((A \times i + B) / M)$ を求めてください。
@{lang.end}


## @{keyword.constraints}

- $1 \leq T \leq 100,000$
- $1 \leq N, M \leq 10^9$
- $0 \leq A, B < M$

## @{keyword.input}

```
$T$
$N_0$ $M_0$ $A_0$ $B_0$
$N_1$ $M_1$ $A_1$ $B_1$
:
$N_{T - 1}$ $M_{T - 1}$ $A_{T - 1}$ $B_{T - 1}$
```

## @{keyword.sample}

@{example.example_00}
