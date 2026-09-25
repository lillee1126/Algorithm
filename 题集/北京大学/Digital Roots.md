# Digital Roots

## 来源

- [pgcode：北京大学计算机考研复试机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

The digital root of a positive integer is found by summing the digits of the integer. If the resulting value is a single digit then that digit is the digital root. If the resulting value contains two or more digits, those digits are summed and the process is repeated. This is continued as long as necessary to obtain a single digit.

For example, consider the positive integer $24$. Adding the $2$ and the $4$ yields a value of $6$. Since $6$ is a single digit, $6$ is the digital root of $24$. Now consider the positive integer $39$. Adding the $3$ and the $9$ yields $12$. Since $12$ is not a single digit, the process must be repeated. Adding the $1$ and the $2$ yields $3$, a single digit and also the digital root of $39$.

#### 输入格式

The input file will contain a list of positive integers, one per line.

The end of the input will be indicated by an integer value of $0$.

#### 输出格式

For each integer in the input, output its digital root on a separate line of the output.

#### 输入样例
```
24
39
0
```

#### 输出样例
```
6
3
```

