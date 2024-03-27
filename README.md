# 0x1D. C - Binary trees
- C, Group project, Algorithm, Data structure

![bst_animation](https://github.com/obithelight/binary_trees/assets/91734251/6910c170-adcf-4dff-a71c-d3a0a40683a3)


## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone:


### What is a binary tree
- A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left and right child. The topmost node is called the root of the tree.

### What is the difference between a binary tree and a Binary Search Tree
- A Binary Search Tree (BST) is a specific type of binary tree where the value of each node in the left subtree is less than the value of the node itself, and the value of each node in the right subtree is greater than the value of the node itself. This property allows for efficient searching, insertion, and deletion operations.

### What is the possible gain in terms of time complexity compared to linked lists
- The possible gain in terms of time complexity compared to linked lists depends on the operation being performed. For searching, insertion, and deletion operations, binary trees, especially BSTs, can have a time complexity of O(log n) on average, whereas linked lists typically have a time complexity of O(n). However, the efficiency of binary trees depends on their balance; unbalanced trees may degrade to O(n) time complexity for these operations.

### What are the depth, height, and size of a binary tree
- Depth: The depth of a node in a binary tree is the length of the path from the root to that node. The depth of the root node is 0.
- Height: The height of a binary tree is the length of the longest path from the root to a leaf node. The height of an empty tree is typically defined as -1, and the height of a tree with only one node (the root) is 0.
- Size: The size of a binary tree is the total number of nodes in the tree.

### What are the different traversal methods to go through a binary tree
Different traversal methods to go through a binary tree are:

- Inorder Traversal: Visit the left subtree, then the root, and finally the right subtree.
- Preorder Traversal: Visit the root, then the left subtree, and finally the right subtree.
- Postorder Traversal: Visit the left subtree, then the right subtree, and finally the root.


### What is a complete, a full, a perfect, a balanced binary tree
- A complete binary tree is a binary tree in which every level, except possibly the last, is filled, and all nodes are as far left as possible. 
- A full binary tree is a binary tree in which every node other than the leaves has two children. 
- A perfect binary tree is both complete and full, meaning all levels are filled, and all nodes have either zero or two children. 
- A balanced binary tree is a binary tree in which the height of the two subtrees of any node differs by at most one.

Contributor: [`Obi`](https://github.com/obithelight/)
