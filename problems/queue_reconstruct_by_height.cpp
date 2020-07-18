#include <iostream>
#include <vector>

std::ostream &operator<<(std::ostream &stream,
                         std::vector<std::vector<int>> &vector) {
  for (const std::vector<int> &v : vector) {
    for (const int &x : v)
      stream << x << ", ";

    stream << "\n";
  }
  return stream;
}

class Solution {
 public:
  std::vector<std::vector<int>>
  reconstruct_queue(std::vector<std::vector<int>> &people) {
    // Sort by height first
    std::sort(people.begin(), people.end(),
              [](std::vector<int> &a, std::vector<int> &b) {
                bool return_a = true;
                if ((a[0] == b[0] && a[1] > b[1]) || (a[0] < b[0]))
                  return_a = false;
                return return_a;
              });

    std::vector<std::vector<int>> result;
    result.reserve(people.size());
    for (const auto &person : people) {
      result.insert(result.begin() + person[1], person);
    }
    return result;
  }
};

int main() {
  std::vector<std::vector<int>> input{{7, 0}, {4, 4}, {7, 1},
                                      {5, 0}, {6, 1}, {5, 2}};

  input = Solution().reconstruct_queue(input);
  std::cout << input << std::endl;
  return 0;
}
