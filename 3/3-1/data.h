

#ifndef _CDATA_H_
# define _CDATA_H_

# include <iostream>
# include <string>

class CData
{
  private:
	int number;
	std::string comment;

  public:
	void init();
	void set(int num, std::string com);
	int get_num();
	std::string get_com();
};

#endif
