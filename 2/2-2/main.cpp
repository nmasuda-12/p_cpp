

#include "minmax.h"


int main()
{
    MinMax i;
    int a = 1;
    int b = -2;
    int c = 3;
    std::cout << a << "と" << b << "と" << c << "のうち、最大のものは" << i.max(a,b,c) << std::endl;
    std::cout << a << "と" << b << "と" << c << "のうち、最小のものは" << i.min(a,b,c) << std::endl;
    return 0;
}