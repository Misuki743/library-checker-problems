## @{keyword.statement}

@{lang.en}
Given integer sequences $a_0, a_1, ..., a_{N - 1}$ and $b_0, b_1, ..., b_{M - 1}$. Calculate an integer sequence $c_0, c_1, ..., c_{(N - 1) + (M - 1)}$ as follows:

$$c_k = \sum_{i+j=k} a_ib_j \bmod @{param.MOD}$$

@{lang.ja}
整数列 $a_0, a_1, ..., a_{N - 1}$、$b_0, b_1, ..., b_{M - 1}$ が与えられます。整数列 $c_0, c_1, ..., c_{(N - 1) + (M - 1)}$ を求めてください。

ただし、

$$c_k = \sum_{i+j=k} a_ib_j \bmod @{param.MOD}$$

です
@{lang.end}

## @{keyword.constraints}

- $1 \leq N, M \leq @{param.N_AND_M_MAX}$
- $0 \leq a_i, b_i < @{param.MOD}$

## @{keyword.input}

```
$N$ $M$
$a_0$ $a_1$ ... $a_{N-1}$
$b_0$ $b_1$ ... $b_{M-1}$
```

## @{keyword.output}

```
$c_0$ $c_1$ ... $c_{(N - 1) + (M - 1)}$
```

## @{keyword.sample}

@{example.example_00}

@{example.example_01}
