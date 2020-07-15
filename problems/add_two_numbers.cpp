#include <iostream>

template <typename T>
struct Node {
  T value;
  Node* next;

  Node() : value(NULL), next(nullptr) {}
  Node(T val) : value(val), next(nullptr) {}
  Node(T val, Node* node_next) : value(val), next(node_next) {}

  ~Node() { delete next; }
};

template<typename T>
class Solution {
 public:
  static Node<T>* add_two_numbers(Node<T>* list1, Node<T>* list2) {
    return add_two_numbers(list1, list2, 0);
  }

  static Node<T>* add_two_numbers(Node<T>* list1, Node<T>* list2, T compress) {
    T val = list1->value + list2->value + compress;
    compress = val / 10;
    Node<T>* ret = new Node<T>(val % 10);

    if (list1->next || list2->next) {

      if (!list1->next)
        list1->next = new Node<T>(0);
      if (!list2->next)
        list2->next = new Node<T>(0);
      ret->next = add_two_numbers(list1->next, list2->next, compress);

    } else if (compress) {
      ret->next = new Node<T>(compress);
    }

    return ret;
  }
};

int main() {
  Node<int> l1(2);
  l1.next = new Node<int>(4);
  l1.next->next = new Node<int>(3);

  Node<int> l2(5);
  l2.next = new Node<int>(6);
  l2.next->next = new Node<int>(4);

  Node<int>* ans = Solution<int>().add_two_numbers(&l1, &l2);
  while (ans) {
    std::cout << ans->value << std::endl;
    ans = ans->next;
  }
  return 0;
}
