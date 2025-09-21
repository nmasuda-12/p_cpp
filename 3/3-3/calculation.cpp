
#include "calculation.h"

void calculation::set_num1(int n)
{
    num1 = n;
}
void calculation::set_num2(int n)
{
    num2 = n;
}
int calculation::get_num1()
{
    return (num1);
}
int calculation::get_num2()
{
    return(num2);
}

int calculation::add()
{
    return (num1 + num2);
}

int calculation::sub()
{
    return(num1 - num2);
}