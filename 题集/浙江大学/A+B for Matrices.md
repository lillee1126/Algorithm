# A+B for Matrices

## 来源

- [pgcode：浙江大学计算机考研复试机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

This time, you are supposed to find $A + B$ where $A$ and $B$ are two matrices, and then count the number of zero rows and columns.

#### 输入格式

The input consists of several test cases, each starts with a pair of positive integers $M$ and $N$ ($\leq 10$) which are the number of rows and columns of the matrices, respectively.

Then $2 \times M$ lines follow, each contains $N$ integers in $[-100, 100]$, separated by a space.

The first $M$ lines correspond to the elements of $A$ and the second $M$ lines to that of $B$.

The input is terminated by a zero $M$ and that case must NOT be processed.

#### 输出格式

For each test case you should output in one line the total number of zero rows and columns of $A + B$.

#### 输入样例
```
2 2
1 1
1 1
-1 -1
10 9
2 3
1 2 3
4 5 6
-1 -2 -3
-4 -5 -6
0
```

#### 输出样例
```
1
5
```

