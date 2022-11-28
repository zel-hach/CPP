#ifndef _WEAPON__HPP
#define _WEAPON__HPP
#include <iostream>

class Weapon
{
    std :: string type;
    public:
    Weapon();
    Weapon(std::string);
    const std ::string& getType();
    void setType(std ::string);
    ~Weapon();
};

#endif