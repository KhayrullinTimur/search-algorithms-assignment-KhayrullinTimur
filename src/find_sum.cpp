#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int L = 0;
    int R = static_cast<int>(data.size() - 1);

    while (L <= R) {
      if (data[L] + data[R] > sum) {
        R--;
        }
      else {
        L++;
      }
      if (data[L] + data[R] == sum) {
        return std::make_pair(L,R);
      }
    }
    return std::nullopt;
  }

}  // namespace assignment