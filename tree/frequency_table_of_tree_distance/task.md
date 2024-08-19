## @{keyword.statement}

@{lang.en}
Given a tree with $N$ vertices, where the $i$-th edge connects vertex $a_i$ and $b_i$. Denote by $x_i$ the number of pairs $(u, v)$ such that $\mathrm{dist}(u, v) = i$. Find $x_i$ for each $i = 1, 2, \cdots, N - 1$.

$\mathrm{dist}(u, v)$ denotes the number of edges on the unique path between vertex $u$ and $v$.
@{lang.ja}
$N$ 頂点の木があります。辺は $(a_i, b_i)$ です。各 $i = 1, 2, \cdots, N - 1$ について、$\mathrm{dist}(u, v) = i$ となる頂点対 $u, v (u < v)$ の個数 $x_i$ を求めてください。

$\mathrm{dist}(u, v)$ は頂点 $u, v$ をつなぐパスの辺数です。
@{lang.end}

## @{keyword.constraints}

- $1 \leq N \leq @{param.N_MAX}$
- $0 \leq a_i, b_i < N$
- $a_i \neq b_i$

## @{keyword.input}

```
$N$
$a_0$ $b_0$
$a_1$ $b_1$
$\vdots$
$a_{N-2}$ $b_{N-2}$
```

## @{keyword.output}

```
$x_1$ $x_2$ $\ldots$ $x_{N-1}$
```

## @{keyword.sample}

@{example.example_00}
