## @{keyword.statement}

@{lang.en}
Each test cases consists of $T$ cases.

Given $Y, P(P: \textrm{prime})$.

Print $X$ s.t. $X^2 \equiv Y (\bmod P)$, or $-1$ if there is no such $X$.
@{lang.ja}
この問題は $T$ ケース与えられます。

$Y, P(P: \textrm{prime})$ が与えられます。

$X^2 \equiv Y (\bmod P)$ なる $X$ を1つ求めてください。
@{lang.end}

## @{keyword.constraints}

@{lang.en}

- $1 \leq T \leq 100,000$
- $2 \leq P \leq 10^9$
- $0 \leq Y < P$
- $P$ is prime.

@{lang.ja}

- $1 \leq T \leq 100,000$
- $2 \leq P \leq 10^9$
- $0 \leq Y < P$
- $P$ は素数

@{lang.end}

## @{keyword.input}

```
$T$
$Y_0$ $P_0$
$Y_1$ $P_1$
:
$Y_{T-1}$ $P_{T-1}$
```

## @{keyword.output}

@{lang.en}
For each line, print $X$ or $-1$.
@{lang.ja}
各行に、$X$、もしくは条件を満たす $X$ が存在しないならば $-1$ を出力してください
@{lang.end}

## @{keyword.sample}

@{example.example_00}
