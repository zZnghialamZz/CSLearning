#include <iostream>
#include <vector>

class Solution {
 public:
  static int single_number(const std::vector<int>& input) {
    int unique = 0;
    for (const int& i : input) {
      unique ^= i;
    }
    return unique;
  }
};

int main() {
  std::vector<int> input { 4, 1, 2, 1, 2 };
  std::cout << Solution().single_number(input) << std::endl;

  return 0;
}
