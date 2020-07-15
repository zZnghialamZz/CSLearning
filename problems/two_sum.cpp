#include <iostream>
#include <map>

class Solution {
 public:
  static std::pair<int, int> two_sum_brute_force(int arr[],
                                                 const size_t& arr_size,
                                                 const int& target) {
    for (int i = 0; i < arr_size; ++i) {
      for (int j = 0; j < arr_size; ++j) {
        if (i == j) continue;

        if ((arr[i] + arr[j]) == target)
          return std::make_pair(i, j);
      }
    }

    return std::make_pair(0, 0);
  }

  static std::pair<int, int> two_sum_hashmap(int arr[],
                                             const size_t& arr_size,
                                             const int& target) {
    std::map<int, int> hashmap;
    for (int i = 0; i < arr_size; ++i) {
      int key = target - arr[i];
      if (hashmap.find(key) != hashmap.end())
        return std::make_pair(hashmap[key], i);
      else
        hashmap[arr[i]] = i;
    }

    return std::make_pair(0, 0);
  }
};

int main() {
  int arr[4] = {2, 3, 4, 11};
  int target = 15;

  std::cout << Solution().two_sum_brute_force(arr, 4, target).first << std::endl;
  std::cout << Solution().two_sum_brute_force(arr, 4, target).second << std::endl;

  std::cout << Solution().two_sum_hashmap(arr, 4, target).first << std::endl;
  std::cout << Solution().two_sum_hashmap(arr, 4, target).second << std::endl;
  return 0;
}
