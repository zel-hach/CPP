#include "HumanB.hpp"

HumanB :: HumanB()
{
    this->name = name;
}
HumanB :: HumanB(std :: string name)
{
    this->name = name;
}
HumanB :: HumanB(std :: string name,Weapon *weapon)
{
    this->name = name;
    this->weapon = weapon;
}
void HumanB :: setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB :: attack()
{
    std :: cout << name << " attacks with their " << weapon->getType() << std :: endl;
}
HumanB :: ~HumanB()
{
    std :: cout << "l appel de conducteur" << std::endl;
}