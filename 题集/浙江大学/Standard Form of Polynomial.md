# Standard Form of Polynomial

## 来源

- [pgcode：浙江大学计算机保研机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

![img](https://pgcode-image.oss-cn-beijing.aliyuncs.com/jnu/%E5%A4%8D%E8%AF%95%E4%B8%8A%E6%9C%BA/%E6%B5%99%E5%A4%A720-1.webp)

一个 $n$ 次多项式的标准形式为 $P(x) = a_n x^n + a_{n-1} x^{n-1} + \cdots + a_1 x + a_0$。

已知 $a_n = 1$ 且 $P(x)$ 的所有 $n$ 个根 $\{r_1, \ldots, r_n\}$ 均为整数。因此 $P(x)$ 可以写成 $(x - r_1)(x - r_2)\cdots(x - r_n)$。

你的任务是在给定所有根的情况下，将 $P(x)$ 展开为标准形式。

#### 输入格式

每个输入文件包含一个测试用例。

第一行给出一个正整数 $n$（$\leq 10$），表示多项式的次数。

第二行给出 $n$ 个整数根，以空格分隔。

#### 输出格式

在一行中输出系数 $a_i$（$i = n-1, \cdots, 0$）。所有数字必须由空格分隔，且行首和行尾不得有多余空格。

保证所有计算结果在 int 范围内。

#### 数据范围

$n \leq 10$，所有根均为整数。

#### 输入样例1

```
3
-1 4 -1
```

#### 输出样例1

```
-2 -7 -4
```

