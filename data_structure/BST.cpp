#include <iostream>

template <typename T>
struct Node {
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

template <typename T>
class Solution {
public:
  static bool is_valid_tree(Node<T> *root) {
    return is_valid_tree(root, std::numeric_limits<T>::min(),
                         std::numeric_limits<T>::max());
  }

  static bool is_valid_tree(Node<T> *root, T bound_low, T bound_high) {
    // Null node is also valid in Binary Search Tree
    if (!root)
      return true;

    // Checking if left and right is valid
    if (root->val > bound_low && root->val < bound_high &&
        is_valid_tree(root->left, bound_low, root->val) &&
        is_valid_tree(root->right, root->val, bound_high))
      return true;

    return false;
  }
};

int main() {
  Node<int> node(5);
  node.left = new Node<int>(2);
  node.right = new Node<int>(7);

  std::cout << Solution<int>().is_valid_tree(&node) << std::endl;
}
