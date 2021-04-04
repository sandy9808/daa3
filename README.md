# Assignment2
*Team Members*
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019004  |   Saloni Singla | Saloni50 |
|    IIB2019005  |   Sandeep kumar |sandy9808 |
|    IIB2019006  |   Amanjeet Kumar | Amanjeetk11 |




## Group No-"21"

Faculty Name-"Dr. Rahul Kala"

Mentor Name- "Md. Meraz"



## Problem Statement
Single shortest distance problem - 
It is about finding a path between vertices in a graph such that the total sum of the edges weights is minimum. 


## How to use code
Download project
git clone https://github.com/Amanjeetk11/daa2.git 
Project Initialize 
```
cd daa
mkdir daa3

#go to daa3
cd daa3

#Create file
touch readme.md
touch code1.cpp
touch code2.cpp
touch code3.cpp

.
.
```
---

Run the code
```
g++ code1.cpp -o code1
g++ code2.cpp -o code2
g++ code3.cpp -o code3
./code1
./code2
./code3
```
Output
```
A path between vertices in a graph in which the total sum of the edges weights is minimum. 

```
---

**Test case**

```

Test Case-1
Input:

Output:
6
#--------------------------#
Test Case-2
Input:
10
1 17 5 10 13 15 10 5 16 8
Output:
7
```

---

### Theory
The  Single-Source  Shortest  Path  (SSSP)  problem  consistsof finding the shortest paths between a given vertex v and allother vertices in the graph.

---

### Analysis

**Time Complexity**

<br />Approach 1:
Time  complexity  of  breadth  first  search(BFS) is O(V+E),  where V is  the  number  of  nodes  and E is  the number of edges.

<br />Approach 2:
Time  complexity  of  Dijkstra’s  algorithm  is O(V+ElogE), because it goes through all nodes of  the  graph  and adds the distance for maximum of one time when at the current node.

<br />Approach 3:
Time  complexity  of  Bellman Ford's algorithm  is O(V*E),  because  it consists  of (V−1) rounds  and iterates through all E edges during a round.




**Space Complexity**

<br />Approach 1:
<br />The  space  complexity  for Dijkstra’s algorithms  is [O(V+E)(for  adjacency  list)  + O(V) (for  other  arrays)]

<br />Approach 2:
<br />The  space  complexity  for  BFS algorithms  is [O(V+E)(for  adjacency  list)  + O(V) (for  other  arrays)].

<br />Approach 3:
<br />The space complexity is O(V) +O(E).



---

### Conclusion

<br />Above two methods have different time complexity & space complexity and meet to fulfill the problem statement. The order in which they are good can be listed as:
<br />I. Approach 2
<br />II. Approach 1
<br />Based on the time complexity and space complexity.

### References
Utkarsh Trivedi, ’Longest Zig-Zag Subsequence’,GeeksforGeeks, 2018. [Online]. [Accessed: 27-Mar-2021]
