#include <conio.h>
#include <cmath>
#include <iostream>

class Vel {
 private:
  double s = 0;
  double to = 0;
  double t1 = 0;

 public:
  Vel(double s, double to, double t1) : s(s), to(to), t1(t1) {}
  Vel() = default;

  double get_Values() {
    double s2, s1;

    s2 = s * (pow(t1, 2));
    s1 = s * (pow(to, 2));

    return s2 - s1 / t1 - to;
  }

  void print_Result() {
    double s2, s1;
    std::cout << "THE RESULT IS : \n";
    std::cout << "------------------\n";
    std::cout << "                  \n";
    std::cout << "        " << s2 << "m" << "-" << s1 << "m";
    std::cout << "                \n";
    std::cout << "V =  ----------  = " << get_Values() << "m/s" << std::endl;
    std::cout << "      " << t1 << "s" << "-" << to << "s";
  }
};

int main(void) {
  double s;
  double to;
  double t1;

  std::cout << "Enter value for speed with time : \n";
  std::cin >> s;
  std::cout << "Enter value of point A: \n";
  std::cin >> to;
  std::cout << "Enter value of point B: \n";
  std::cin >> t1;

  Vel a(s, to, t1);

  a.print_Result();

  std::cout << a.get_Values() << std::endl;

  getch();

  return 0;
}