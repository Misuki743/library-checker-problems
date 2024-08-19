## @{keyword.statement}

@{lang.en}

Let $a_k$ be the number of size $k$ permutations $p$ s.t. $p_i \neq i$ for each $i$.

Given $N, M$. For each $i = 1, \cdots, N$, print $b_k = a_k \bmod M$.
@{lang.ja}
$N, M$ が与えられます。

長さ $K$ の撹乱順列の個数を $a_k$ とします。
$1$ から $N$ までの各 $K$ に対して、$b_k = a_k \bmod M$ を求めてください。
@{lang.end}


## @{keyword.constraints}

- $1 \leq N \leq 10^6$
- $1 \leq M \leq 10^9$

## @{keyword.input}

```
$N$ $M$
```

## @{keyword.output}

```
$b_1$ $b_2$ $\ldots$ $b_N$
```

## @{keyword.sample}

@{example.example_00}

@{example.example_01}
