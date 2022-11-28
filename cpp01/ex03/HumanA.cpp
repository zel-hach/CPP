#include "HumanA.hpp"

HumanA :: HumanA()
{
    this->name = name;
    this->weapon = weapon;
}
HumanA :: HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = weapon;
}
void HumanA :: attack()
{
    std :: cout << name << " attacks with their " << weapon.getType() << std ::endl;
}
HumanA :: ~HumanA()
{
    std :: cout << "l appel de conducteur" << std::endl;
}