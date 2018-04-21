#ifndef HEADER_SPEAK
#define HEADER_SPEAK

// Speak //
class Speak {
public:
  Speak();
  Speak(int);
  ~Speak();

  bool Compare(int, int);

protected:
  bool SetI(int);

private:
  int i_;

  int GetI();
};

// TestSpeak //
class TestSpeak : public Speak {
public:
  TestSpeak();
  ~TestSpeak();

  bool GetConclusion();

private:
  bool result_; // false denotes fail
};

#endif
