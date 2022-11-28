#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name )
{
    int i;
    char c;
    Zombie *zombieH = new Zombie[N];
    i = 0;
    while (i < N)
    { 
        c = i + 48;
        zombieH[i] = Zombie(name + c);
        // zombieH[i].announce();
        i++; 
    }
    return (zombieH);
}