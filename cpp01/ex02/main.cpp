#include <iostream>
#include <cstring>

int main()
{
    std :: string str = "HI THIS IS BRAIN";
    std :: string  &stringREF = str;
    std :: string *stringPTR;
    stringPTR = &str;
    std :: cout << "L’adresse :" << std ::endl;
    std :: cout << &str << std ::endl;
    std :: cout << &stringPTR << std :: endl;
    std :: cout << &stringREF << std :: endl;
    std :: cout << "la valeur :"  << std :: endl;
    std :: cout << str << std ::endl;
    std :: cout << stringPTR << std :: endl;
    std :: cout << stringREF << std :: endl;
}