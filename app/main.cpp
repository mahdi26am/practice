
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include "Foo.h"
int main()
{
    system("clear");
    std::cout << std::flush;
    float teta{0};
    std::cout << "Enter x : ";
    std::cin >> teta;
    std::cout << "cos" << "(" << teta << ")" << " = " << 1 + func(radian(teta)) << "\n";
    return 0;
}
