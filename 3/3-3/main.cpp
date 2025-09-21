

#include "calculation.h"

int	main(void)
{
	calculation c;
	c.set_num1(8);
	c.set_num2(9);

	std::cout << c.get_num1() << "+" << c.get_num2() << "=" << c.add() << std::endl;
	std::cout << c.get_num1() << "-" << c.get_num2() << "=" << c.sub() << std::endl;
	return (0);
}