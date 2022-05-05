#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).
    int index_left_bord = 0;
    int index_right_bord = static_cast<int>(data.size()) - 1;
    while (index_left_bord <= index_right_bord) {
      int middle_index = (index_left_bord + index_right_bord) / 2;
      if (search_element == data[middle_index]) {
        return middle_index;
      }
      if (search_element < data[middle_index]) {
        index_right_bord = middle_index - 1;
      }
      else if (search_element > data[middle_index]) {
        index_left_bord = middle_index + 1;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment