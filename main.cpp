#include <iostream>

#include "assignment/find_sum.hpp"  // for example

#include "assignment/binary_search_iterative.hpp"

using namespace std;
using namespace assignment;

int main(int argc, char **argv) {

  auto indices = find_sum({2, 3, 11, 60, 99}, 71);

  if (indices.has_value()) {
    cout << indices->first << ',' << indices->second;
  }
  else {
    cout << "404\n";
  }

  BinarySearchIterative search_algo;

  auto found = search_algo.Search({0, 5, 1, 6, 0, 2, 5, 3, 7, 8}, 1);

  return 0;
}
