#ifndef __ZOMBIE__H
#define __ZOMBIE__H

#include <iostream>
#include <cstring>

class Zombie
{
private:
    std :: string name;
public:
    Zombie();
    Zombie(std ::string);
    void setName(std::string);
    std::string getName();
    void announce( void );
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif