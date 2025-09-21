

#ifndef _TWOSTRING_H_
# define _TWOSTRING_H_

# include <iostream>
# include <string>

class Twostring
{
  private:
	std::string m_string1;
	std::string m_string2;

  public:
	void set_string1(std::string str);
	void set_string2(std::string str);
	std::string get_string1();
	std::string get_string2();
	std::string connect();
	int connect_len();
};

#endif
