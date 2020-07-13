#include <iostream>

template <typename T> struct Node {
  T val;
  Node *left;
  Node *right;

  Node() : val(NULL), left(nullptr), right(nullptr) {}
  Node(T value) : val(value), left(nullptr), right(nullptr) {}
  Node(T value, Node *node_left, Node *node_right)
      : val(value), left(node_left), right(node_right) {}

  ~Node() {
    delete left;
    delete right;
  }
};

int main() {
    Node<int> node(2);
    node.left = new Node<int>(5);
}
