#ifndef _HARL__H
#define _HARL__H

#include <iostream>
#include <cstring>

class Harl
{
    void info();
    void debug();
    void warning();
    void error();
    public:
    Harl();
    ~Harl();
    void complain( std::string level);
};


#endif