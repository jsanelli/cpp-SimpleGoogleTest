#include <gtest/gtest.h>

#include "../src/sqrt.cc"
#include "../src/get_char.cc"
 
TEST(HelloWorldTestNumberOne, SubTestOne) {
  ASSERT_EQ(6, squareRoot(36.0));
}

TEST(HelloWorldTestNumberOne, SubTestTwo) {
  ASSERT_EQ(6, squareRoot(36.0));
}

TEST(HelloWorldTestNumberTwo, SubTestOne) {
  ASSERT_EQ(6, squareRoot(36.0));
}

TEST(GetChar, SubTest1) {
  ASSERT_EQ(123, GetChar());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
