#include <iostream>
#include <cstring>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
    public :
        Contact contact[8];
        PhoneBook();
        ~PhoneBook();
        void addcontact(Contact*,int );
        void surchcontact(Contact*,int);
};