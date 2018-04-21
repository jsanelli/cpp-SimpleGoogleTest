#include <gtest/gtest.h>
#include <iostream>
#include "../include/speak.h"

// Speak //
Speak::Speak() {
  i_ = 2;
}

Speak::Speak(int i) {
  i_ = i;
}

Speak::~Speak() {
}

bool Speak::Compare(int x, int y) {
  bool retval = false;
  if (x == y)
    retval = true;
  return retval;
}

bool Speak::SetI(int i) {
  bool retval = false;
  i_ = i;
  if (i_ == i)
    retval = true;
  return retval;
}

int Speak::GetI() {
  return i_;
}

void Speak::SaySomething() {
  std::cout << "Hello Class, your number is " << GetI() << std::endl;
}

// TestSpeak //
TestSpeak::TestSpeak() {
  int i = 123;
  result_ = SetI(i);
}

TestSpeak::~TestSpeak() {
}

bool TestSpeak::GetConclusion() {
  return result_;
}
