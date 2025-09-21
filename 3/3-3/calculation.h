

#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

class calculation
{
    private :
        int num1;
        int num2;
    public :
        void set_num1(int n);
        void set_num2(int n);
        int get_num1();
        int get_num2();
        int add();
        int sub();
};

#endif