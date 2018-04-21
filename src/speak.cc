#include <gtest/gtest.h>

#include <iostream>

#include "../include/speak.h"

TestSpeak::TestSpeak() {
}

TestSpeak::~TestSpeak() {
}

Speak::Speak() {
  i_ = 2;
}

Speak::Speak(int i) {
  i_ = i;
}

Speak::~Speak() {
}

bool TestSpeak::TestGetI() {
 return false; // false = fail
}

int Speak::GetI() {
  return i_;
}

void Speak::SaySomething() {
  std::cout << "Hello Class, your number is " << GetI() << std::endl;
}
