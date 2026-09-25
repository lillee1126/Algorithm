# Falling Leaves（落叶问题）

## 题目

#### 问题描述

You are given a sequence of leaf removals from a binary search tree ($BST$) of uppercase letters. Your task is to reconstruct the original $BST$ and output its preorder traversal.

**Definition of Binary Search Tree:**

1. An empty tree is a valid $BST$.

2. A non-empty $BST$ consists of:

   - A root node containing a letter

   - A left subtree ($BST$ where all letters are alphabetically smaller than the root)

   - A right subtree ($BST$ where all letters are alphabetically larger than the root)

**Leaf Removal Process:**

1. Remove all current leaf nodes (nodes without children) and record their letters in sorted order

2. Repeat the process until the tree becomes empty

Given this removal sequence, reconstruct the $BST$ and output its preorder traversal.

#### 输入格式

- Multiple test cases

- Each test case consists of several lines representing removal steps:

  - Each line contains letters removed in one step (sorted in alphabetical order)

- Test cases are separated by a line containing single asterisk (\*)

- Input terminates with a line containing dollar sign ($)

- No empty lines or extra spaces in input

#### 输出格式

For each test case, output one line containing the preorder traversal of the reconstructed $BST$ (no spaces).

#### 输入样例

```
BDHPY
CM
GQ
K
*
AC
B
$
```

#### 输出样例

```
KGCBDHQMPY
BAC
```



