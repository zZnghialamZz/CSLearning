#include <iostream>

#define LOG(x) std::cout << "DEBUG: " << x << std::endl;

class Solution {
 private:
  static int binary_search(int arr[], const int& arr_size,
                           const int& low, const int& high,
                           const int& target, const bool& find_first) {
    if (high < low)
      return -1;

    int mid = low + (high - low)/2;
    if (find_first) {
      if ((mid == 0 || target > arr[mid - 1]) && arr[mid] == target)
        return mid;
      if (target > arr[mid])
        return binary_search(arr, arr_size, mid, high, target, find_first);
      else // In case there is duplicate numbers
        return binary_search(arr, arr_size, low, mid, target, find_first);

    } else {
      if ((mid == (arr_size - 1) || target < arr[mid + 1]) && arr[mid] == target)
        return mid;
      if (target < arr[mid])
        return binary_search(arr, arr_size, low, mid, target, find_first);
      else // In case there is duplicate numbers
        return binary_search(arr, arr_size, mid, high, target, find_first);
    }

    return 0;
  }

 public:
  static std::pair<int, int> get_range(int arr[], const int& arr_size,
                                       const int& target) {
    int first = binary_search(arr, arr_size, 0, arr_size - 1, target, true);
    int second = binary_search(arr, arr_size, 0, arr_size - 1, target, false);
    return std::make_pair(first, second);
  }
};

int main() {
  int arr[12] = {1, 3, 3, 5, 6, 7, 9, 9, 9, 15, 15, 21};
  int target = 9;

  std::cout << Solution().get_range(arr, 12, target).first << std::endl;
  std::cout << Solution().get_range(arr, 12, target).second << std::endl;
}
