#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
 public:
  static std::vector< std::vector<int> > permute(std::vector<int> &nums) {
    return permute(nums, 0);
  }

  static std::vector< std::vector<int> > permute(std::vector<int> &nums,
                                                 int start) {
    if (start == ((int)(nums.size()) - 1))
      return { nums };

    std::vector<std::vector<int> > result;
    for (int i = start; i < (int)(nums.size()); ++i) {
      std::swap(nums[start], nums[i]);

      auto tmp = permute(nums, start + 1);
      result.insert(result.end(), tmp.begin(), tmp.end());

      std::swap(nums[start], nums[i]);
    }

    return result;
  }
};

int main() {
  std::vector<int> arr = { 1, 2, 3, 4};
 
  for (auto a : Solution().permute(arr)) {
    for (int i = 0; i < a.size(); ++i)
      std::cout << a[i] << " ";

    std::cout << "\n-----------------" << std::endl;
  }
  return 0;
}
