#ifndef TST_FUNCTION_4_H
#define TST_FUNCTION_4_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include "../val_set.h"

using namespace testing;

#include <algorithm>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

int InputNumberCMD(int &number) { std::cin >> number; }

TEST(test_0, number_string) {
  auto ret = BuildMapValuesSet(
      {{1, "odd"}, {2, "even"}, {3, "odd"}, {4, "even"}, {5, "odd"}});
  std::set<std::string> s = {"even", "odd"};
  EXPECT_EQ(ret, s);
}

#endif  // TST_FUNCTION_4_H
