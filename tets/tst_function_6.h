#ifndef TST_FUNCTION_6_H
#define TST_FUNCTION_6_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include "../sort_string.h"

using namespace testing;

#include <string>
using namespace std;

SortedStrings sortStr;
void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}

TEST(fff, ff) {
  SortedStrings strings;

  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);

  strings.AddString("second");
  PrintSortedStrings(strings);
}

#endif  // TST_FUNCTION_3_H
