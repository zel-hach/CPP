#include "Zombie.hpp"

int main()
{
    // Zombie z;
    // z.announce();
    // Zombie zi("zineb");
    // zi.announce();
    // Zombie *zl = new Zombie("test");
    // zl->announce();
    // delete zl;
    Zombie *z;
    z = zombieHorde(6, "zineb");
    z->announce();

    delete[] z;
    // delete newZombie( "llll");
    return (0);
}