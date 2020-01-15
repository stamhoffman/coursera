#include <gtest/gtest.h>
#include "test.h"

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  ::testing::FLAGS_gtest_filter = "*block*";
  return RUN_ALL_TESTS();
}
