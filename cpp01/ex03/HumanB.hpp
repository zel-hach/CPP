#ifndef _HUMANB__HPP
#define _HUMANB__HPP
#include <iostream>
#include"Weapon.hpp"

class HumanB
{
    Weapon *weapon;
    std :: string name;
    public :
        HumanB();
        HumanB(std :: string);
        HumanB(std :: string ,Weapon *);
        void setWeapon(Weapon&);
        void attack();
        ~HumanB();
};


#endif