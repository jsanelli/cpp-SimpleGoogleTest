#ifndef HEADER_SPEAK
#define HEADER_SPEAK

// Speak //
class Speak {
public:
  Speak();
  Speak(int);
  ~Speak();

  void SaySomething();

protected:
  void SetI(int);

private:
  int i_;

  int GetI();
};

// TestSpeak //
class TestSpeak : public Speak {
public:
  TestSpeak();
  ~TestSpeak();

  bool TestI(int);
};

#endif
