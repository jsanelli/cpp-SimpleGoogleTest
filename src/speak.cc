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

void Speak::SetI(int i) {
  i_ = i;
}

int Speak::GetI() {
  return i_;
}

void Speak::SaySomething() {
  std::cout << "Hello Class, your number is " << GetI() << std::endl;
}

// TestSpeak //
TestSpeak::TestSpeak() {
}

TestSpeak::~TestSpeak() {
}

bool TestSpeak::TestI(int i) {
  return false; // false denotes fail
}
