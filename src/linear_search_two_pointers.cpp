#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int first = 0;
    int last = static_cast<int>(data.size() - 1);
    while (first <= last) {
      if (data[first] == search_element) {
        return first;
      }
      if (data[last] == search_element) {
        return last;
      }
      first++;
      last--;
    }

    return std::nullopt;
  }

}  // namespace assignment