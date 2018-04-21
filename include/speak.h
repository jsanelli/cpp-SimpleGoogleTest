#ifndef HEADER_SPEAK
#define HEADER_SPEAK

class TestSpeak {
public:
  TestSpeak();
  ~TestSpeak();

  bool TestGetI();
};

//class Speak {
class Speak : public TestSpeak {
public:
  Speak();
  Speak(int);
  ~Speak();

  void SaySomething();
protected:
  bool TestGetI();
private:
  int i_;

  int GetI();
};

#endif
