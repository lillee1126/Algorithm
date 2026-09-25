# Mileage Bank

## 来源

- [pgcode：北京大学计算机保研机试真题](https://gitcode.com/2301_81739397/pgcode)
- [在线评测](https://pgcode.cn/)

## 题目

#### 题目描述

Mileage program of $ACM$ ($Airline$ $of$ $Charming$ $Merlion$) is really nice for the travelers flying frequently. Once you complete a flight with $ACM$, you can earn $ACM$ $Perk$ miles in your $ACM$ $Mileage$ $Bank$ depending on the mileage you actually fly. In addition, you can use the $ACM$ $Perk$ mileage in your $Mileage$ $Bank$ to exchange free flight tickets of $ACM$ in the future. The following table helps you calculate how many $ACM$ $Perk$ miles you can earn when you fly on $ACM$:

| Class Code         | You'll Earn                                        |

| ------------------ | -------------------------------------------------- |

| First Class ($F$)    | Actual mileage + $100\%$ mileage bonus                |

| Business Class ($B$) | Actual mileage + $50\%$ mileage bonus                 |

| Economy Class ($Y$)  | $1-500$ miles: $500$ miles, $500+$ miles: Actual mileage |

It's shown that your $ACM$ $Perk$ mileage consists of two parts. One is your actual flight mileage (the minimum $ACM$ $Perk$ mileage for Economy Class for one flight is $500$ miles), the other is the mileage bonus (its accuracy is up to $1$ mile) when you fly in Business Class and First Class. For example, you can earn $1329$ $ACM$ $Perk$ miles, $1994$ $ACM$ $Perk$ miles, and $2658$ $ACM$ $Perk$ miles for $Y$, $B$, or $F$ class respectively for the flight from Beijing to Tokyo (the actual mileage between Beijing and Tokyo is $1329$ miles). When you fly from Shanghai to Wuhan, you can earn $ACM$ $Perk$ $500$ miles for Economy Class and $ACM$ $Perk$ $650$ miles for Business Class (the actual mileage between Shanghai and Wuhan is $433$ miles). Your task is to help $ACM$ build a program for automatic calculation of $ACM$ $Perk$ mileage.

#### 输入格式

The input file contains several data cases. Each case has many flight records, each per line. The flight record is in the following format:

`Original_city Destination_city Actual_miles Class_code`

Each case ends with a line of one `0`.

#### 输出格式

Output the summary of $ACM$ $Perk$ mileages for each test case, one per line. When calculating bonus, be sure to round $x.5$ up to $x+1$.

#### 输入样例

```
Beijing Tokyo 1329 F
Shanghai Wuhan 433 Y
0
```

#### 输出样例

```
3158
```

