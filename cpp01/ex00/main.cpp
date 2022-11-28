#include "Zombie.hpp"

int main()
{
    Zombie z;
    z.announce();
    Zombie zi("zineb");
    zi.announce();
    Zombie *zl = new Zombie("test");
    zl->announce();
    newZombie( "llll")->announce();
    randomChump("ggkjfhgdddf");
    delete zl;
    // delete newZombie( "llll");
    return (0);
}