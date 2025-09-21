#include "number.h"

int main()
{
	Number *pn = 0;
	pn = new Number();
	pn->set_num(1,2);
	std::cout << pn->get_add() << std::endl;
	delete pn;
	return 0;
}
