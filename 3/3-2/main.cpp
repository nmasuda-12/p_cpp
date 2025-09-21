

#include "twostring.h"

int main()
{
    Twostring s;
    s.set_string1("hello");
    s.set_string2("world");
    std::cout <<"1つ目の文字列は" << s.get_string1() << std::endl;
    std::cout <<"2つ目の文字列は" << s.get_string2() << std::endl;
    std::cout <<"1つ目と2つ目の文字列を合成したのは" << s.connect() << std::endl;
    std::cout <<"合成した文字列の長さは" << s.connect_len() << std::endl;
    return 0;
}