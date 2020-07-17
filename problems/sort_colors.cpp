#include <algorithm>
#include <iostream>
#include <vector>

#define LOG(x) std::cout << x << std::endl;

class Solution {
 public:
  void sort_colors(std::vector<int>& nums) {
    int zero_index = 0;
    int two_index = nums.size() - 1;
    int index = 0;
    while (index <= two_index) {
      switch (nums[index]) {
        case 0:
          std::swap(nums[index], nums[zero_index]);
          ++index;
          ++zero_index;
          break;
        case 1:
          ++index;
          break;
        case 2:
          std::swap(nums[index], nums[two_index]);
          --two_index;
          break;
      }
    }
  }
};

std::ostream &operator<<(std::ostream &stream, std::vector<int> vector) {
  for (const int& x : vector)
    stream << x << ", ";
  return stream;
}

int main() {
  std::vector<int> nums = { 2, 2, 1, 0, 2, 1, 0 };
  LOG(nums);

  LOG("After Sorted: ---")
  Solution().sort_colors(nums);
  LOG(nums);
  return 0;
}
