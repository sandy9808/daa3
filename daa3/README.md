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
<br />
git clone https://github.com/sandy9808/daa3.git
<br />
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

Test Case for code1.cpp
Input:
13 16
0 1
1 2
2 3
0 4 
1 5
2 6
3 7
5 6
4 8
8 9
5 10
6 11
7 12
9 10 
10 11
11 12
Output:
SSSP(0, 0) = 0
SSSP(0, 1) = 1
SSSP(0, 2) = 2
SSSP(0, 3) = 3
SSSP(0, 4) = 1
SSSP(0, 5) = 2
SSSP(0, 6) = 3
SSSP(0, 7) = 4
SSSP(0, 8) = 2
SSSP(0, 9) = 3
SSSP(0, 10) = 3
SSSP(0, 11) = 4
SSSP(0, 12) = 5

Test Case for code2.cpp
Input:
5 5 1
0 1 1
0 2 10
1 3 2
2 3 10
3 4 3
Output:
SSSP(1, 0) = 1
SSSP(1, 1) = 0
SSSP(1, 2) = 11
SSSP(1, 3) = 2
SSSP(1, 4) = 5

Test Case for code3.cpp
Input:
5 5 0
0 1 1
0 2 10
1 3 2
2 3 -10
3 4 3
Output:
SSSP(0, 0) = 0
SSSP(0, 1) = 1
SSSP(0, 2) = 10
SSSP(0, 3) = 0
SSSP(0, 4) = 3
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

Here we discussed algorithms to solve SSSP for undirected graph and also for Unweighted graph, <br />the distances can be computed in almost linear time complexity but for weighted graph, <br />there exist several algorithms for different types of graphs.

### References
<br />https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
<br />https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
<br />https://www.geeksforgeeks.org/shortest-path-unweighted-graph/

