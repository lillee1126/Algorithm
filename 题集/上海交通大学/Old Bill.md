# Old Bill

## 来源

- [pgcode：上海交通大学计算机保研机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

Among grandfather's papers a bill was found:

"$72$ turkeys $_679_$"

The first and last digits of the number representing the total price are faded (denoted by $\_$). What are the two faded digits and what was the price per turkey?

We want to write a program that solves a general version of this problem:

"$N$ turkeys $_XYZ_$"

- $N$ (number of turkeys) is between $1$ and $99$ (inclusive)

- The total price originally had $5$ digits, but only the middle $3$ digits ($X$, $Y$, $Z$) are visible

- The first digit is nonzero

- Each turkey costs the same integer price

  Given $N$, $X$, $Y$, $Z$, find the two faded digits and the original total price. If multiple solutions exist, choose the most expensive one (maximum price per turkey).

#### 输入格式

The first line contains integer $N$ ($0 < N < 100$). The second line contains three digits $X$, $Y$, $Z$ separated by spaces (representing the middle three digits of the total price).

#### 输出格式

Output the two faded digits (first and last) followed by the maximum price per turkey (integer).

#### 输入样例

```
72
6 7 9
```

#### 输出样例

```
3 2 511
```

