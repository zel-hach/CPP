/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:48 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/18 22:26:54 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::string getName() const;
    void announce( void );
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );


#endif