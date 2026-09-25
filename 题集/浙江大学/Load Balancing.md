# Load Balancing

## 题目

#### 题目描述

$Load balancing$ ($负载均衡$) refers to efficiently distributing incoming network traffic across a group of backend servers. A $load balancing$ algorithm distributes loads in a specific way.

If we can estimate the maximum incoming traffic load, here is an algorithm that works according to the following rule:

- The incoming traffic load of size $S$ will first be partitioned into two parts, and each part may be again partitioned into two parts, and so on.

- Only one partition is made at a time.

- At any time, the size of the smallest load must be strictly greater than half of the size of the largest load.

- All the sizes are positive integers.

- This partition process goes on until it is impossible to make any further partition.

For example, if $S=7$, then we can break it into $3+4$ first, then continue as $4=2+2$.

The process stops at requiring three servers, holding loads $3$, $2$, and $2$.

Your job is to decide the maximum number of backend servers required by this algorithm.

Since such kind of partitions may not be unique, find the best solution -- that is, the difference between the largest and the smallest sizes is minimized.

#### 输入格式

Each input file contains one test case, which gives a positive integer $S$ ($2 \leq N \leq 200$), the size of the incoming traffic load.

#### 输出格式

For each case, print two numbers in a line, namely, $M$, the maximum number of backend servers required, and $D$, the minimum of the difference between the largest and the smallest sizes in a partition with $M$ servers.

The numbers in a line must be separated by one space, and there must be no extra space at the beginning or the end of the line.

#### 输入样例
```
22
```

#### 输出样例
```
4 1
```



