#include <gtest/gtest.h>

#include "../src/get_number.cc"
#include "../src/get_square.cc"

#include "../src/speak.cc"
#include "../include/speak.h"
 
TEST(GetChar, SubTest1) {
  auto min = 0;
  auto count = 300;

  Speak alice;
  TestSpeak testspeak;

  for (auto i=min; i<count; i++) {
    ASSERT_EQ(i, GetChar(i));
  }

  //test public functions
  alice.SaySomething();
  // test private functions

  // testspeak
  ASSERT_TRUE(testspeak.TestI(123));  


}

TEST(GetSquare, SubTest1) {
  ASSERT_EQ(1, GetSquare(1));
  ASSERT_EQ(4, GetSquare(2));
  ASSERT_EQ(9, GetSquare(3));
}

int main(int argc, char **argv) {
  ::testing::GTEST_FLAG(output) = "xml:results.xml";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
