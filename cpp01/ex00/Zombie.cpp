#include "Zombie.hpp"

Zombie::Zombie()
{
    std :: cout << "constructeur sans parametre" << std :: endl;
}
Zombie::Zombie(std ::string name)
{
    this->name = name;
     std :: cout << "constructeur avec parametre" << std :: endl;
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