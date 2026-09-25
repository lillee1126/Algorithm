# Candy Sharing Game

## 来源

- [pgcode：北京大学计算机考研复试机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

A number of students sit in a circle facing their teacher in the center. Each student initially has an number of pieces of candy. When the teacher blows a whistle, each student simultaneously gives half of his or her candy to the neighbor on the right. Any student, who ends up with an odd number of pieces of candy, is given another piece by the teacher. The game ends when all students have the same number of pieces of candy. Write a program which determines the number of times the teacher blows the whistle and the final number of pieces of candy for each student from the amount of candy each child starts with.

#### 输入格式

The input may describe more than one game. For each game, the input begins with the number $N$ of students, followed by $N$ candy counts for the children counter-clockwise around the circle. Each input number is on a line by itself.

#### 输出格式

For each game, output the number of rounds of the game followed by the amount of candy each child ends up with, both on one line.

The game ends in a finite number of steps because:

1. The maximum candy count can never increase.

2. The minimum candy count can never decrease.

3. No one with more than the minimum amount will ever decrease to the minimum.

4. If the maximum and minimum candy count are not the same, at least one student with the minimum amount must have their count increase.

#### 输入样例
```
6
36
2
2
2
2
2
```

#### 输出样例
```
15 14
```

