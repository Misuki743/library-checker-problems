## @{keyword.statement}

@{lang.en}
A Polynomial $f(x) = \sum_{i=0}^{N-1} a_ix^i \in \mathbb{Z}[x]$ and an integer $c$ is given.
Compute the sequence $b_0, b_1, \ldots, b_{N-1}$ satisfying $f(x+c) = \sum_{i=0}^{N-1}b_ix^i$, and print it modulo $@{param.MOD}$.

@{lang.ja}
多項式 $f(x) = \sum_{i=0}^{N-1} a_ix^i \in \mathbb{Z}[x]$, 整数 $c$ が与えられます。
$f(x+c) = \sum_{i=0}^{N-1}b_ix^i$ を満たす数列 $b_0, b_1, \ldots, b_{N-1}$ を $\bmod @{param.MOD}$ で計算してください。
@{lang.end}

## @{keyword.constraints}

- $1 \leq N \leq @{param.N_MAX}$
- $0 \leq c, a_i < @{param.MOD}$

## @{keyword.input}

```
$N$ $c$
$a_0$ $a_1$ ... $a_{N-1}$
```

## @{keyword.output}

```
$b_0$ $b_1$ ... $b_{N - 1}$
```

## @{keyword.sample}

@{example.example_00}

@{example.example_01}
