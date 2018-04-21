#include <gtest/gtest.h>

#include "../src/get_number.cc"
#include "../src/get_square.cc"
 
TEST(GetChar, SubTest1) {
  auto min = 0;
  auto count = 300;

  for (auto i=min; i<count; i++) {
    ASSERT_EQ(i, GetChar(i));
  }

}

TEST(GetSquare, SubTest1) {
  ASSERT_EQ(1, GetSquare(1));
  ASSERT_EQ(4, GetSquare(2));
  ASSERT_EQ(9, GetSquare(3));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
