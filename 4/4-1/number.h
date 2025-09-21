#ifndef _NUMBER_H_
#define _NUMBER_H_

#include <iostream>

class Number
{
	private :
		int a;
		int b;
	public :
		Number();
		~Number();
		void set_num(int n1,int n2);
		int get_add();
};


#endif
