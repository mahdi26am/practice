
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "Foo.h"

float factorial(int i)
{
    float f{1};
    for (int j = 1; j <= i; j++)
    {
        f *= j;
    }
    return f;
}
float func(float x)
{
    int i{1};
    float division{0}, div_total{0};
    float t{2};
    float up{0}, down{0};
    for (t = 2; t <= 20; t += 2)
    {
        up = pow(x, t);
        down = factorial(t);
        division = up / down;
        if (i % 2 == 0)
            div_total += division;
        else
            div_total -= division;
        i++;
    }
    return div_total;
}
float radian(float teta)
{
  float rad = teta * M_PI / 180;
  return rad;
}
int main()
{
  Foo d = Foo();
  std::cout<< d.doSomething()<<std::endl;

  return 0;
    system("clear");
    std::cout << std::flush;
    float teta{0};
    std::cout << "Enter x : ";
    std::cin >> teta;
    std::cout << "cos" << "(" << teta << ")" << " = " << 1 + func(radian(teta)) << "\n";
    return 0;
}
