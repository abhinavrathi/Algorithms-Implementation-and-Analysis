#Graphs
Here we work on a few algorithms and operations pertaining Graph reprentation of data. Some algorithms use Adjacency Lists while others use Matrices.

##Breadth First Search

Given a starting node in a graph, we first process the starting node, i.e. visit all of its children. Next we process all of the children one by one before moving on to the second level children. This is accomplished by maintaining a Queue for the nodes to be processed. The principle is, a node that is seen first will be processed first. A node is visited only once in the search.<br>
Time Complexity of BFS is &theta;(V + E)

##Depth First Search

Given a starting node in a graph, we process the first child exhaustively before moving to the second child. That is we process a node, then its child, and so on before moving on to the siblings. This is accomplished by maintaining a Stack for the nodes to be processed. The principle is, a node that is seen latest will be processed first. A node is visited only once in the search.<br>
Time Complexity of DFS is &theta;(V + E)

##Minimum Spanning Tree (Prim's)

A Minimum Spanning Tree is a connected tree which joins all the vertices in the graph with the minimum total edge weights.<br>
We employ Prim's Algorithm to find out the MST. We start with a random node. We consider all of its neigbours, and select the minimum edge weight neighbour. This edge is added to the MST. Next we repeat by considering all neighbours of these two vertices, to select the minimum edge weight neighbour. Thus this process is continued until we have a Minimum Spanning Tree connecting all vertices.<br>
Time Complexity of Prim's Algorithm is &theta;(V + Elog V)

##Shortest Path (Dijkstra's)

Given a starting node in the graph, we find out the shortest paths from this node to all other reachable nodes.<br>
We employ Dijkstra's Algorithm (We assume we have no negative edge weight cycles). We process all neighbours of the starting node and select the minimum edge weight neighbour. We have found the shortest path to this node. Now we update shortest paths to all the neighbours of this new node, and then select minimum distance neighbor from these two nodes. Thus this process is continued until we have shortest paths to all vertices. Initially we assume shortest paths to all other vertices to be Infinity.<br>
Time Complexity of Dijkstra's Algorithm is &theta;(V + Elog V)