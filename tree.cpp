// Full Binary Tree, which is a tree data structure 
//in which each node has at most two children.
#include <iostream>
using namespace std;
 
 /*Node class represents a single node in the Full Binary Tree. 
 It has three public data members: value representing the value stored in the node, 
 and left and right representing pointers to the left and right child nodes respectively. */
class Node {
 public:
  int value;
  Node* left;
  Node* right;
  /*Node class also has a constructor that takes an integer value and 
  initializes the data members accordingly*/
  Node(int val) : value(val), left(NULL), right(NULL) {}
};
 /*FullBinaryTree class represents the Full Binary Tree data structure itself. 
 It has one public data member root which is a pointer to the root node of the tree. */
class FullBinaryTree {
 public:
 /*The FullBinaryTree class also has a constructor 
 that initializes the root pointer to NULL.*/
  Node* root;
  FullBinaryTree() : root(NULL) {}
  void insert(int value) {
    /*This line of code allocates memory on the heap for a new Node object and returns a pointer to the beginning of that memory block. The new operator initializes the object by calling its constructor. In this case, the constructor being called is Node(int val)
     which takes an int value as an argument and sets the value of the Node object to that value.*/
    Node* new_node = new Node(value);
    /*The code Node* new_node = new Node creates a new object of the class Node using the C++ new operator and returns a pointer to that object. 
    The pointer is then stored in the new_node variable of type Node*.*/
    if (!root) {
      root = new_node;
    } else {
      Node* current_node = root;
      while (true) {
        if (!current_node->left) {
          current_node->left = new_node;
          break;
        } else if (!current_node->right) {
          current_node->right = new_node;
          break;
        } else {
          current_node = current_node->left;
        }
      }
};
 
int main() {
  FullBinaryTree tree;
  tree.insert(1);
  tree.insert(2);
  tree.insert(3);
  tree.insert(4);
  return 0;
}