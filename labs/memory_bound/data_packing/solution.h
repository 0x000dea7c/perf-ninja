// NOTE: this lab is currently broken.
// After migrating to a new compiler version the speedup is no longer measurable
// consistently. You can still try to solve it to learn the concept, but the
// result is not guaranteed.

#include <array>

// Assume those constants never change
constexpr int N = 10000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

struct S {
  float d;
  int l : 8;
  int i : 8;
  short s : 8;
  bool b;

  bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::array<S, N> &arr);
S create_entry(int first_value, int second_value);
void solution(std::array<S, N> &arr);
