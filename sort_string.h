#ifndef SORT_STRING_H
#define SORT_STRING_H

#include <set>
#include <vector>

class SortedStrings {
 public:
  SortedStrings() {}
  ~SortedStrings() {}
  void AddString(const std::string str) { strings.insert(str); }
  std::vector<std::string> GetSortedStrings() {
    return std::vector<std::string>(strings.begin(), strings.end());
  }

 private:
  std::multiset<std::string> strings;
};

#endif  // SORT_STRING_H
