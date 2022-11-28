#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = name;
}
Zombie::Zombie(std ::string name)
{
    this->name = name;
}
void Zombie:: setName(std::string name)
{
    this->name = name;
}
std::string Zombie:: getName()
{
    return(this->name);
}
void Zombie :: announce( void )
{
    setName(name);
    std :: cout << getName() << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}
Zombie::~Zombie()
{
     std :: cout << "appel destructeur" << std :: endl;
}