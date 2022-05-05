//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& data, int search_element) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return recursive_helper(data, search_element, 0, static_cast<int>(data.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::recursive_helper(const std::vector<int>& data, int search_element,
                                                             int left_index, int right_index) const {

    // Tips:
    // 1. Рассмотрите базовые случаи выхода и рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента
    if (right_index - left_index <= 1) {
      if (left_index > right_index) {
        return std::nullopt;
      }
      if (search_element == data[left_index]) {
        return left_index;
      }
      if (search_element == data[right_index]) {
        return right_index;
      }
      return std::nullopt;
    }
    int middle_index = (left_index + right_index) / 2;
    if (data[middle_index] < search_element) {
      return recursive_helper(data, search_element, middle_index, right_index);
    } else {
      return recursive_helper(data, search_element, left_index, middle_index);
    }
  }

}  // namespace assignment