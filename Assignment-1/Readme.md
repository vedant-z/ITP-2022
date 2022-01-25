# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IEC2021079  |   Vedant Borkar | vedant-z |
|    IEC2021080  |   Nallabothula Pooja | pooja817 | 
|    IEC2021081  |   Ashutosh Shah | ashushah036  |
|    IEC2021082  |   Neha Meena | Nehameena123  |

**Group No-**"20"

**Faculty Name-**"Mohammed Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Write a C program to merge given a sorted and rotated array, find if there is a pair with a given sum.

---
## How to use code
Firstly give the size of two arrays which you want to merge and then give the sum for which you want to find the pairs as integer value.
After that just provide the elements of two arrays of whose sizes were given as input.
```
#Download project
git clone https://github.com/vedant-z/ITP-2022
```
Project Initialize 
```
cd ITP-2022
#create assignment-1 folder
mkdir Assignment-1

#go to assignment-1
cd Assignment-1

#Create file
touch readme.md
touch itp_ppt.pdf
touch IEEE_FOAMATITP-converted.pdf
touch main.c
```
---

Run the code
```
C main.c
```
Output
```
Merge given a sorted and rotated array, find if there is a pair with a given sum.
```
---

**Test case**

merge array and find pairs
```
Test Case-1
Input:
5 4 
10
30 40 50 10 20
6 8 2 4
Output:
The merged array..
30 40 50 10 20 6 8 2 4
After sorting...

2 4 6 8 10 20 30 40 50
[2,8] [4,6] --->Pairs with given sum
#--------------------------#
Test Case-2
Input:
5 7
0
3 4 5 1 2 
10 11 12 13 7 8 9
Out:
The merged array..
3 4 5 1 2 10 11 12 12 7 8 9
After sorting...

1 2 3 4 5 7 8 9 10 11 12 13
There exists no such pairs
```
### Theory
We are given a sorted and rotated array and then we have to merge it and after that the problem is to check that whether there exists a pair with a given sum or not in merged array. So in this assignment we are trying to find the solution of this query.---

### Analysis

**Time Complexity**
O(N^2) will be the TIME Complexity of the given code.

---

### References

1.https://www.geeksforgeeks.org/c-program-for-given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/

2.https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

3.https://www.tutorialspoint.com/check-if-an-array-is-sorted-and-rotated-in-cplusplus
