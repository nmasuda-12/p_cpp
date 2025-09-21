
#include "data.h"

void CData::init()
{
	number = 0;
	comment = "";
}

void CData::set(int num, std::string com)
{
	number = num;
	comment = com;
}

int CData::get_num()
{
    return(number);
}

std::string CData::get_com()
{
    return(comment);
}