#include <iostream>
#include <map>
#include <string>

class Solution {
 public:
  static bool can_construct(std::string ransom_note, std::string magazine) {
    // Contruct Hash Map
    std::map<char, int> hash_map;
    for (const char &c : magazine) {
      if (hash_map.count(c))
        hash_map[c] += 1;
      else
        hash_map.insert({c, 1});
    }

    for (const char &n : ransom_note) {
      if (hash_map[n] == 0)
        return false;
      else
        hash_map[n] -= 1;
    }

    return true;
  }
};

int main() {
    std::cout << Solution().can_construct("BED", "ABCEDEFGH") << std::endl;
    // Result: True or 1
    std::cout << Solution().can_construct("CAT", "ABCEDEFGH") << std::endl;
    // Result: False or 0
}
