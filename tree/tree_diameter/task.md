## @{keyword.statement}

@{lang.en}
You are given a weighted undirected tree with $N$ vertices.
The $i$-th edge bidirectionally connects vertices $a_i$ and $b_i$, and its weight is $c_i$.

Find a pair of vertices $(u, v)$ that are farthest apart, and output the path from $u$ to $v$.

@{lang.ja}
$N$ 頂点の重み付き無向木が与えられる．
$i$ 番目の辺は，頂点 $a_i$,$b_i$ 間に双方向に張られており，重みは $c_i$ である．

最遠頂点対 $(u, v)$ を一つ構築し，$u$ から $v$ へのパスを出力せよ． 

@{lang.end}

## @{keyword.constraints}

@{lang.en}
- All input are integers.
- $@{param.N_MIN} \leq N \leq @{param.N_MAX}$
- $0 \leq a_i, b_i \leq N - 1$
- $a_i \neq b_i$
- $@{param.C_MIN} \leq c_i \leq @{param.C_MAX}$

@{lang.ja}
- 入力は全て整数である
- $@{param.N_MIN} \leq N \leq @{param.N_MAX}$
- $0 \leq a_i, b_i \leq N - 1$
- $a_i \neq b_i$
- $@{param.C_MIN} \leq c_i \leq @{param.C_MAX}$

@{lang.end}

## @{keyword.input}

```
$N$
$a_0$ $b_0$ $c_0$
$a_1$ $b_1$ $c_1$
$\vdots$
$a_{N-2}$ $b_{N-2}$ $c_{N-2}$
```

## @{keyword.output}

```
$X$ $Y$
$u_0$ $u_1$ $\ldots$ $u_{Y-1}$
```
@{lang.en}
$X$ is the sum of weights on the path, and $Y$ is the number of vertices on the path.
$u_i$ and $u_{i+1}$ are the starting and ending vertices of the $i+1$-th edge traveled.

@{lang.ja}
$X$ はパスの重みの総和，$Y$ はパスに含まれる頂点数を表す．
$u_i$,$u_{i+1}$ はそれぞれ $i+1$ 番目に通る辺の始点と終点を表す．

@{lang.end}

## @{keyword.sample}

@{example.example_00}
