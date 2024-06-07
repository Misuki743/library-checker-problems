## @{keyword.statement}

@{lang.en}

Given a polynomial $f(x) = \sum_{i = 0}^{N - 1} c_i x^i \in \mathbb{Z}[x]$ and integer sequence $p_0, p_1, ..., p_{M - 1}$.
Print $f(p_i) \bmod 998244353$ for each $p_i$.

@{lang.ja}

多項式 $f(x) = \sum_{i = 0}^{N - 1} c_i x^i \in \mathbb{Z}[x]$, 整数列 $p_0, p_1, ..., p_{M - 1}$ が与えられます。
$f(p_i) \bmod 998244353$ を全ての$p_i$について求めてください。

@{lang.end}

## @{keyword.constraints}

- $1 \leq N, M \leq 2^{17}(=131072)$
- $0 \leq c_i, p_i < 998244353$
- $c_{N - 1} \neq 0$

## @{keyword.input}

```
$N$ $M$
$c_0$ $c_1$ ... $c_{N-1}$
$p_0$ $p_1$ ... $p_{M-1}$
```

## @{keyword.output}

```
$f(p_0)$ $f(p_1)$ ... $f(p_{M-1})$
```

## @{keyword.sample}

@{example.example_00}

@{example.example_01}
