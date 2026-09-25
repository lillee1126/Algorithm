# Sum of Factorials

## 题目

#### 题目描述

John von Neumann， b. Dec. 28， 1903， d. Feb. 8， 1957， was a Hungarian-American mathematician who made important contributions to the foundations of $ mathematics $， $ logic $， $ quantum physics $， $ meteorology $， $ science $， $ computers $， and $ game theory $. He was noted for a phenomenal memory and the speed with which he absorbed ideas and solved problems. In 1925 he received a B.S. diploma in chemical engineering from Zurich Institute and in 1926 a Ph.D. in $ mathematics $ from the University of Budapest， His Ph.D. dissertation on $ set theory $ was an important contributions to the subject. At the age of 20， von Neumann proposed a new definition of $ ordinal numbers $ that was universally adopted. While still in his twenties， he made many contributions in both pure and applied $ mathematics $ that established him as a mathematician of unusual depth. His $ Mathematical Foundation of Quantum Mechanics $ (1932) built a solid framework for the new scientific discipline. During this time he also proved the $ mini-max theorem $ of $ GAME THEORY $. He gradually expanded his work in $ game theory $， and with coauthor Oskar Morgenstern he wrote $ Theory of Games and Economic Behavior $ (1944). There are some numbers which can be expressed by the sum of factorials. For example $ 9 $， $ 9 = 1! + 2! + 3! $ . Dr. von Neumann was very interested in such numbers. So， he gives you a number $ n $， and wants you to tell whether or not the number can be expressed by the sum of some factorials. Well， it is just a piece of case. For a given $ n $， you will check if there are some $ x_i $， and let $ n $ equal to $ \Sigma_{i=1}^{t} x_i! $ ($ t \geq 1 $， $ x_i \geq 0 $， $ x_i = x_j \iff i = j $). If the answer is yes， say “YES”; otherwise， print out “NO”.

约翰·冯·诺依曼（John von Neumann，1903年12月28日－1957年2月8日）是匈牙利裔美国数学家，在数学基础、逻辑学、量子物理、气象学、科学、计算机和博弈论等领域作出了重要贡献。

他以惊人的记忆力、快速吸收思想和解决问题的能力著称。

1925年，他获得苏黎世联邦理工学院化学工程学士学位，1926年在布达佩斯大学取得数学博士学位，其关于集合论的博士论文对该学科具有重要影响。

20岁时，冯·诺依曼提出的序数新定义被广泛采纳。

二十多岁时，他在纯数学与应用数学领域的多项贡献奠定了其作为卓越数学家的地位。

其著作《量子力学的数学基础》（1932）为这一新学科构建了坚实框架。在此期间，他还证明了博弈论中的极小化极大定理，并与奥斯卡·摩根斯特恩合著《博弈论与经济行为》（1944）。  

存在一些可以表示为阶乘之和的数字。

例如：9 = 1! + 2! + 3!。

冯·诺依曼博士对此类数字非常感兴趣。

现在给定一个数字n，请你判断该数字是否可以表示为若干互不相同的阶乘之和（即是否存在t≥1，各xi≥0且互不相同的条件下满足n = Σxi!）。

若可以则输出"YES"，否则输出"NO"。  

（注：根据数学定义，0! = 1）

#### 输入格式

You will get a non-negative integer $ n $ ($ n \leq 1,000,000 $) from input file.

你将从输入文件中获取一个非负整数 $n$（$n \leq 1,000,000$）。

#### 输出格式

For the $ n $ in the input file, you should print exactly one word (“YES” or “NO”) in a single line. No extra spaces are allowed.

对于输入文件中的 $ n $，您应该在一行中准确地打印一个单词(“YES”或“NO”)。

不允许有额外的空格。

#### 数据范围

$ 0 \leq n \leq 10^6 $

每组输入最多包含 100 组数据。

#### 输入样例

```
9
2
```

#### 输出样例

```
YES
YES
```



