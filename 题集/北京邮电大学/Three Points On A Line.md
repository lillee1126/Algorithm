# Three Points On A Line

## 来源

- [pgcode：北京邮电大学计算机考研复试机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

Given points on a 2D plane, judge whether there're three points that locate on the same line.

#### 输入格式

The number of test cases $ T $ ($ 1 \leq T \leq 10 $) appears in the first line of input.

Each test case begins with the number of points $ N $ ($ 1 \leq N \leq 100 $). The following $ N $ lines describe the coordinates $ (x_i, y_i) $ of each point, in accuracy of at most 3 decimals. Coordinates are ranged in $ [-10^4, 10^4] $.

#### 输出格式

For each test case, output $ Yes $ if there're three points located on the same line, otherwise output $ No $.

#### 输入样例

```
2
3
0.0 0.0
1.0 1.0
2.0 2.0
3
0.001 -2.000
3.333 4.444
1.010 2.528
```

#### 输出样例

```
Yes
No
```

