#include <gtest/gtest.h>

#include "../src/get_char.cc"
#include "../src/get_square.cc"
 
TEST(GetChar, SubTest1) {
  ASSERT_EQ(123, GetChar(123));
}

TEST(GetSquare, SubTest1) {
  ASSERT_EQ(4, GetSquare(2));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
