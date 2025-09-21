
#include "twostring.h"

void Twostring::set_string1(std::string str)
{
    m_string1 = str;
}

void Twostring::set_string2(std::string str)
{
    m_string2 = str;
}

std::string Twostring::get_string1()
{
    return(m_string1);
}

std::string Twostring::get_string2()
{
    return(m_string2);
}

std::string Twostring::connect()
{
    std::string s;
    s = m_string1;
    s.append(m_string2);
    return(s);
}

int Twostring::connect_len()
{
    std::string s;
    s = connect();
    return(s.length());
}