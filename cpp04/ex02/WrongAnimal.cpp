/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:25:39 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 19:20:32 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal()
{
	std ::cout << "default constractor WrongAnimal is called" << std::endl;
}
WrongAnimal :: WrongAnimal(std::string type)
{
	this->type = type;
	std ::cout << "constractor with arguments WrongAnimal  is called" << std::endl;
}
WrongAnimal :: WrongAnimal(const WrongAnimal& copy)
{
	this->type = copy.type;
	std ::cout << "copy constractor WrongAnimal is called" << std::endl;
}
WrongAnimal& WrongAnimal :: operator=(const WrongAnimal& a)
{
	this->type = a.type;
	std ::cout << "WrongAnimal: operator assignement  is called" << std::endl;
	return(*this);
}
WrongAnimal :: ~WrongAnimal()
{
	std ::cout << "destractor WrongAnimal is called" << std::endl;
}
std::string WrongAnimal :: getType() const
{
	return(this->type);
}
void WrongAnimal :: setType(std::string type)
{
	this->type = type;
}
void WrongAnimal ::makeSound() const
{
	std :: cout << "WrongAnimal sound is :Nothing " << std::endl;
}