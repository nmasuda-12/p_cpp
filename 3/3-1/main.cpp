

#include "data.h"


int main()
{
    CData d;
    d.init();

    d.set(100,"Programming C++");
    std::cout << "number = " << d.get_num() << " comment =" << d.get_com() << std::endl; 
    return 0;
}