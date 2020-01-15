#ifndef TST_FUNCTION_3_H
#define TST_FUNCTION_3_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include "../number_string.h"

using namespace testing;

#include <algorithm>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

int InputNumberCMD(int &number) { std::cin >> number; }

TEST(test_0, number_string) { main_number_string(); }

#endif  // TST_FUNCTION_3_H
