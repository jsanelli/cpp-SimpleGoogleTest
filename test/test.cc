#include <gtest/gtest.h>

#include "../src/get_number.cc"
#include "../src/get_square.cc"

#include "../src/speak.cc"
#include "../include/speak.h"
 
TEST(GetChar, SubTest1) {
  auto min = 0;
  auto count = 300;
  auto x = 0, y = 0;

  Speak alice;
  TestSpeak testspeak;

  for (auto i=min; i<count; i++) {
    //test GetChar
    ASSERT_EQ(i, GetChar(i));

    // test public functions
    ASSERT_TRUE(alice.Compare(x, y));
    // test private functions
    ASSERT_TRUE(testspeak.GetConclusion());  
  }
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
