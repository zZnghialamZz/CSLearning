#include <iostream>

class Node {
 public:
  int val;
  Node* next;

  Node() : val(0), next(nullptr) {};
  Node(int value) : val(value), next(nullptr) {};
  Node(int value, Node* node_next) : val(value), next(node_next) {};

  virtual ~Node() { delete next; };
};

class Solution {
 public:
  static Node* reverse_linklist(Node* node) {
    Node* cur = node;
    Node* prev = nullptr;
    Node* tmp = nullptr;

    while (cur) {
      tmp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = tmp;
    }

    return prev;
  }
};

std::ostream &operator<<(std::ostream &stream, Node* node) {
  Node* tmp = node;
  while(tmp != nullptr) {
    stream << tmp->val;
    tmp = tmp->next;
  }
  return stream;
}

int main() {
  Node ll(1, new Node(2, new Node(3, new Node(4, new Node(5)))));
  std::cout << Solution().reverse_linklist(&ll) << std::endl;

  return 0;
}
