# Assignment-2

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
Declare the C structures for the following scenario:
(i)  College contains the following fields: College code (2characters), College Name, year
     of establishment, number of courses.
(ii) Each course is associated with course name (String), duration, number of students.
     (A College can offer 1 to 50 such courses)


---
## How to use code
Firstly you have to give details of college and in that section you will be also asked about number of couses(x) and after entering that you will be asked to enter details of that number of courses.And after that you see details of college and course details  available in that college.
#Download project
```
git clone https://github.com/vedant-z/ITP-2022
```
Project Initialize 
```
cd ITP-2022
#create assignment-2 folder
mkdir Assignment-2

#go to assignment-2
cd Assignment-2

#Create file
touch readme.md
touch itp2.pdf
touch IEEE_FORMATITP2-converted.pdf
touch struct.c
touch IEEE_FORMATITP2.docx
```
---

Run the code
```
C struct.c
```
Output
```
Details of the college and courses available in that college.

```
---

**Test case**


```
Test Case-1
Input:
wx
iiita
1999
3
it
4
250
it-bi
4
40
ece
4
130
Output:



                                                        ***COLLEGE DETAILS*** 

College code :wx 

College name :iiita 

Year of establishement :1999

Number of courses in college :3

                                                        ***COURSE DETAILS***

1]
Course name :it
Course duration :4.0
Number of students :250

 2]
Course name :it-bi
Course duration :4.0
Number of students :40

 3]
Course name :ece
Course duration :4.0
Number of students :130



Test Case-2
Input:
ux
iiit Lucknow
2015
3
it
4
150
AI
4
60
it-bi
4
40

Output:

 ***COLLEGE DETAILS*** 

College code :ux 

College name :iiit Lucknow 

Year of establishement :2015

Number of courses in college :3

                                                        ***COURSE DETAILS***

1]
Course name :it
Course duration :4.0
Number of students :150

 2]
Course name :AI
Course duration :4.0
Number of students :60

 3]
Course name :it-bi
Course duration :4.0
Number of students :40


### Theory
We were given to code a program that stores details of a college that includes code(2 characters),college name,Year of establishment,number of course.also we were asked to include details of each course(1 to 50 course a college can have)that includes course name,duration and number of students.
to solve the give problem statements we have created two stucture one for collge details and other for course details.we tooks for both college and course details to store details of course we have created a array of structure (course details),then we simply have used prinf statement and for loop to print out the details.

### Analysis

**Time Complexity**
O(N)
will be the time complexity of the given code
**Space Complexity**
O(N) will be the space complexity of the given code
---

### References

1.https://www.geeksforgeeks.org/structures-in-cpp/?ref=lbp

2.https://www.geeksforgeeks.org/array-of-structures-vs-array-within-a-structure-in-c-and-cpp/

3.https://stackoverflow.com/questions/30619085/error-in-getting-input-in-structure-using-gets
