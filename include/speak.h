#ifndef HEADER_SPEAK
#define HEADER_SPEAK

class TestSpeak {
public:
  TestSpeak();
  ~TestSpeak();
};

//class Speak {
class Speak : public TestSpeak {
public:
  Speak();
  Speak(int);
  ~Speak();

  void SaySomething();
protected:
  ; // int GetI();
private:
  int i_;

  int GetI();
};

#endif
