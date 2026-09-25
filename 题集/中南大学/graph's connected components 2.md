# graph's connected components 2

## 题目

#### 题目描述
Given an integers set of ${m}$ integers, each integer is in the range [0, ${2^n-1}$]. A graph is build on the following constraints: if integers ${X}$ and ${Y}$ satisfy ${X \& Y = 0}$（${\&}$ is bitwise AND operation），${X}$ and ${Y}$ are connected by an undirected edge. Please help PIPI count the number of connected components in the graph!
#### 输入格式
Input contains multiple test cases. Each test case starts with a number ${n}$（${0 \le n \le 22}$）and ${m}$（${1 \le m \le 2^n}$）. The next line contains ${m}$ different integers: ${a_1,a_2...a_m}$，each integer ${0 \le a_i < 2^n}$.
#### 输出格式
For each case, print connected components for each group of input data.
#### 数据范围
${0 \le n \le 22}$，${1 \le m \le 2^n}$
#### 输入样例
```
2 3
1 2 3
5 5
5 19 10 20 12
5 6
5 19 10 20 12 0
```
#### 输出样例
```
2
2
1
```



