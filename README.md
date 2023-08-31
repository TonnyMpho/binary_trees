## Binary trees

1. What is a Binary Tree?
A binary tree is a data structure that consists of nodes connected by edges. Each node has at most two child nodes, usually referred to as the left child and the right child. The top node of the tree is called the root node, and nodes with no children are called leaf nodes. Binary trees are used in various applications, including search algorithms, data storage, and hierarchical structures.

2. Difference between a Binary Tree and a Binary Search Tree (BST)
A binary tree is a general structure where each node can have up to two children, without any specific ordering. On the other hand, a Binary Search Tree (BST) is a type of binary tree with a specific property: for every node, all nodes in its left subtree have values less than the node's value, and all nodes in its right subtree have values greater than the node's value. This ordering property in BSTs allows for efficient searching, insertion, and deletion of nodes, making them ideal for tasks like searching in a sorted dataset.

3. Time Complexity Gain Compared to Linked Lists
Binary trees offer improved time complexity compared to linked lists for certain operations. In a balanced binary tree (discussed later), searching, insertion, and deletion operations can be achieved in O(log n) time, where n is the number of nodes. In contrast, linked lists have linear time complexity (O(n)) for these operations, as you might have to traverse the entire list.

4. Depth, Height, and Size of a Binary Tree

Depth: The depth of a node is the number of edges from the root node to that node.
Height: The height of a node is the number of edges on the longest path from that node to a leaf node. The height of the tree is the height of the root node.
Size: The size of a binary tree is the total number of nodes in the tree.
5. Traversal Methods in a Binary Tree
There are three main traversal methods for binary trees:

In-Order: Traverse the left subtree, visit the root node, traverse the right subtree.
Pre-Order: Visit the root node, traverse the left subtree, traverse the right subtree.
Post-Order: Traverse the left subtree, traverse the right subtree, visit the root node.
6. Types of Binary Trees

Complete Binary Tree: A binary tree where all levels are completely filled except possibly the last level, which is filled from left to right. This tree is used in heap data structures.
Full Binary Tree: A binary tree in which every node has either 0 or 2 children. There are no nodes with only 1 child.
Perfect Binary Tree: A binary tree where all internal nodes have exactly two children, and all leaf nodes are at the same level.
Balanced Binary Tree: A binary tree in which the height of the left and right subtrees of any node differ by at most one. This property ensures better time complexities for various operations.

#### Resources

- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
