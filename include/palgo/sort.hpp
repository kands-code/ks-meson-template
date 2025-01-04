#include <cstdint>
#include <functional>
#include <vector>

enum class Ord { LT, EQ, GT };

template <typename T>
void select_sort(std::vector<T> &lst, const std::function<Ord(T, T)> &cmp) {
  if (lst.size() < 2) {
    // for len(lst) < 2, no need to sort
    return;
  }
  for (std::uint64_t i = 0; i < lst.size() - 1; ++i) {
    // find the minimum value of rest list
    std::uint64_t min = i;
    for (std::uint64_t j = i + 1; j < lst.size(); ++j) {
      if (cmp(lst.at(min), lst.at(j)) == Ord::GT) {
        min = j;
      }
    }
    if (min != i) {
      // exchange the minimum value and current position
      T tmp = lst.at(i);
      lst.at(i) = lst.at(min);
      lst.at(min) = tmp;
    }
  }
}

template <typename T>
void bubble_sort(std::vector<T> &lst, const std::function<Ord(T, T)> &cmp) {
  if (lst.size() < 2) {
    // for len(lst) < 2, no need to sort
    return;
  }
  for (std::uint64_t i = lst.size(); i > 0; --i) {
    // push the maximum value to the end of lst
    for (std::uint64_t j = 0; j < i - 1; ++j) {
      if (cmp(lst.at(j), lst.at(j + 1)) == Ord::GT) {
        // exchange j and j + 1 if lst[j] > lst[j + 1]
        T tmp = lst.at(j + 1);
        lst.at(j + 1) = lst.at(j);
        lst.at(j) = tmp;
      }
    }
  }
}

template <typename T>
void insert_sort(std::vector<T> &lst, const std::function<Ord(T, T)> &cmp) {
  if (lst.size() < 2) {
    // for len(lst) < 2, no need to sort
    return;
  }
  for (std::uint64_t i = 0; i < lst.size(); ++i) {
    // push the minimum value to the begin of lst
    for (std::uint64_t j = i; j > 0; --j) {
      if (cmp(lst.at(j), lst.at(j - 1)) == Ord::LT) {
        // exchange j and j + 1 if lst[j] < lst[j - 1]
        T tmp = lst.at(j - 1);
        lst.at(j - 1) = lst.at(j);
        lst.at(j) = tmp;
      }
    }
  }
}
