# I Wanna Go Home

## 来源

- [pgcode：北京大学计算机考研复试机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

The country is facing a terrible civil war----cities in the country are divided into two parts supporting different leaders. As a merchant, $Mr. M$ does not pay attention to politics but he actually knows the severe situation, and your task is to help him reach home as soon as possible.

"For the sake of safety,", said $Mr. M$, "your route should contain at most $1$ road which connects two cities of different camp."

Would you please tell $Mr. M$ at least how long will it take to reach his sweet home?

#### 输入格式

The input contains multiple test cases.

- The first line of each case is an integer $N$ $(2 \leq N \leq 600)$, representing the number of cities in the country.

- The second line contains one integer $M$ $(0 \leq M \leq 10000)$, which is the number of roads.

- The following $M$ lines are the information of the roads. Each line contains three integers $A$, $B$ and $T$, which means the road between city $A$ and city $B$ will cost time $T$. $T$ is in the range of $[1, 500]$.

- Next part contains $N$ integers, which are either $1$ or $2$. The $i$-th integer shows the supporting leader of city $i$.

To simplify the problem, we assume that $Mr. M$ starts from city $1$ and his target is city $2$. City $1$ always supports leader $1$ while city $2$ is at the same side of leader $2$.

Note that all roads are bidirectional and there is at most $1$ road between two cities.

Input is ended with a case of $N=0$.

#### 输出格式

For each test case, output one integer representing the minimum time to reach home.

If it is impossible to reach home according to $Mr. M$'s demands, output $-1$ instead.

#### 输入样例
```
2
1
1 2 100
1 2
3
3
1 2 100
1 3 40
2 3 50
1 2 1
5
5
3 1 200
5 3 150
2 5 160
4 3 170
4 2 170
1 2 2 2 1
0
```

#### 输出样例
```
100
90
540
```

