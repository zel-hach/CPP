#ifndef _HUMANA__HPP
#define _HUMANA__HPP
#include <iostream>
#include"Weapon.hpp"

class HumanA
{
    Weapon weapon;
    std :: string name;
    public :
        HumanA();
        HumanA(std::string, Weapon&);
        void attack();
        ~HumanA();
};



#endif