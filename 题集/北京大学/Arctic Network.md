# Arctic Network

## 题目

#### 题目描述

The Department of National Defence (DND) wishes to connect several northern outposts using a wireless network. Two communication technologies are available:

1. **Radio Transceivers**: Each outpost has a radio transceiver. Two outposts can communicate via radio if the distance between them does not exceed $ D $, where $ D $ depends on the transceiver power. All transceivers must have the same $ D $.

2. **Satellite Channels**: Some outposts have satellite channels. Any two outposts with satellite channels can communicate directly via satellite, regardless of distance.

Your task is to determine the **minimum $ D $** required such that every pair of outposts has at least one communication path (direct or indirect).

#### 输入格式

- **First line**: $ N $ (number of test cases, $ N \geq 1 $).

- **Per test case**:

  - **First line**: $ S $ (number of satellite channels, $ 1 \leq S \leq 100 $) and $ P $ (number of outposts, $ S < P \leq 500 $).

  - **Next $ P $ lines**: Coordinates $ (x, y) $ of each outpost (integers between 0 and 10,000).

#### 输出格式

For each test case, output the **minimum $ D $** required, rounded to **2 decimal places**.

#### 输入样例

```
1
2 4
0 100
0 300
0 600
150 750
```

#### 输出样例

```
212.13
```



