#include <cmath>
#include <iostream>
#include <string>

template <class T> void test_for_zero(const T &t, const std::string &s)
{
  if(std::abs(t) < 1e-14)
    std::cout << "PASS: " << s << "\n";
  else
  {
    std::cerr << "FAIL: " << s << " " << std::abs(t) << "\n";
    std::exit(1);
  }
}
