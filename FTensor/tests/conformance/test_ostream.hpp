#include <iostream>
#include <sstream>

template <class T>
void test_ostream(const T &t, const std::string &expected,
                  const std::string &test_name)
{
  std::stringstream ss;
  ss << t;
  if(ss.str() == expected)
    {
      std::cout << "PASS: " << test_name << "\n";
    }
  else
    {
      std::cout << "FAIL: " << test_name << ": " << ss.str()
                << "!=" << expected << "\n";
    }
}
