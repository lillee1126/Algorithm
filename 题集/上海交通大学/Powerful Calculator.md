# Powerful Calculator

## 题目

#### 题目描述

Today, facing the rapid development of business, SJTU recognizes that more powerful calculator should be studied, developed and appeared in future market shortly. SJTU now invites you attending such amazing research and development work.

In most business applications, the top three useful calculation operators are $Addition$ ($+$), $Subtraction$ ($-$) and $Multiplication$ ($\times$) between two given integers. Normally, you may think it is just a piece of cake. However, since some integers for calculation in business application may be very big, such as the $GDP$ of the whole world, the calculator becomes harder to develop.

For example, if we have two integers $20\,000\,000\,000\,000\,000$ and $4\,000\,000\,000\,000\,000$, the exact results of $addition$, $subtraction$ and $multiplication$ are:

    $20000000000000000 + 4000000000000000 = 24\,000\,000\,000\,000\,000$

    $20000000000000000 - 4000000000000000 = 16\,000\,000\,000\,000\,000$

    $20000000000000000 \times 4000000000000000 = 80\,000\,000\,000\,000\,000\,000\,000\,000\,000\,000$

Note: SJTU prefers the exact format of the results rather than the float format or scientific remark format. For instance, we need "$24000000000000000$" rather than $2.4 \times 10^{16}$.

As a programmer in SJTU, your current task is to develop a program to obtain the exact results of the $addition$ ($a + b$), $subtraction$ ($a - b$) and $multiplication$ ($a \times b$) between two given integers $a$ and $b$.

#### 输入格式

Each case consists of two separate lines where the first line gives the integer $a$ and the second gives $b$ ($|a| < 10^{400}$ and $|b| < 10^{400}$).

#### 输出格式

For each case, output three separate lines showing the exact results of $addition$ ($a + b$), $subtraction$ ($a - b$) and $multiplication$ ($a \times b$) of that case, one result per lines.

#### 输入样例

```
20000000000000000
4000000000000000
```

#### 输出样例

```
24000000000000000
16000000000000000
80000000000000000000000000000000
```



