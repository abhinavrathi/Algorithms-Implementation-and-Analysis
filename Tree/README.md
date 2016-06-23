#Tree
Here we work on an algorithms and operations relevant to Tree reprentation of data. Pointers are used to link structues as a tree.

##Binary Search Tree
A Binary Search Tree is like a binary tree, i.e. there are atmost two children at any given node with the additional property that at any node's value is atleast as big as the maximum value in it's left subtree and atmost as small as the minimum value in it's right subtree. In other words, values smaller than a node's value goes in the left subtree and values bigger in the right.<br>

Following are some of the operations implemented on the Binary Search Tree:

###Insert an Element in the Tree
Elements are inserted as per the Binary Search Tree property of smaller to the left and bigger to the right. A search is made and the element is stuck at to the first NULL pointer encountered.<br>
Time Complexity of Insertion is &theta;(log n)

###Delete an Element from the Tree
Element to be deleted is first searched in the tree. If not present, the function exits. If present, we may have three cases. The node to be deleted has no children,1 child or 2 children. The first two of these cases are straightforward with node's parent being linked to node's child thereby deleting current node. (Using previous pointers and not a separate parent pointer). The third case is a bit tricky, here we swap the node with it's predecessor and then delete the predecessor node, which is guaranted to fall in one of the first two cases.<br>
Time Complexity of Deletion is &theta;(log n)

###Search an Element in the Tree
Elements are searched as per the Binary Search Tree property of smaller to the left and bigger to the right. A search is made from the root going downwards. If at any time we find a match, we report match found. If we reach a NULL pointer, match not found is reported.<br>
Time Complexity of Search is &theta;(log n)

###PreOrder Traversal of the Tree
In pre-order traversal, elements are displayed as output the node's value first, then call the same procedure for left subtree and then for the right subtree. This is achieved by recursion.<br>
Time Complexity of PreOrder Traversal is &theta;(n)

###InOrder Traversal of the Tree
In in-order traversal, we first print elements of the left subtree, then output the node's value, and finally call the procedure for the right subtree. This is achieved by recursion.<br>
In-order traversal gives the ouput in Sorted Order.<br>
Time Complexity of InOrder Traversal is &theta;(n)

###PostOrder Traversal of the Tree
In post-order traversal, we first call the procedure for left subtree and then for the right subtree, and at the end print the node's value. This is achieved by recursion.<br>
Time Complexity of PostOrder Traversal is &theta;(n)

###Output Minimum Value in the Tree
As per the property of a Binary Search Tree, to find the Tree's minimum value we just follow the path of left pointers from the root.<br>
Time Complexity to find Minimum is &theta;(log n)

###Output Maximum Value in the Tree
As per the property of a Binary Search Tree, to find the Tree's maximum value we just follow the path of right pointers from the root.<br>
Time Complexity of Maximum is &theta;(log n)

###Output Predecessor of an Element in the Tree
If the node has a left child, then it's predecessor is the maximum element in the left subtree. Else, we traverse upwards from the node until we find the first node to which the node last encountered was a right child. (this is actually implemented top-down since we do not maintain parent pointers)<br>
Time Complexity to find Predecessor is &theta;(log n)

###Output Successor of an Element in the Tree
If the node has a right child, then it's successor is the minimum element in the right subtree. Else, we traverse upwards from the node until we find the first node to which the node last encountered was a left child. (this is actually implemented top-down since we do not maintain parent pointers)<br>
Time Complexity to find Successor is &theta;(log n)

Note: Assumption is that the tree is Balanced, else the time complexity can be as worse as in the case of a simple linked list.

Also, we may augument nodes in this Tree with additional information to accomplish various tasks.
