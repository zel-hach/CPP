/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:25:39 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 23:43:39 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal :: Animal()
{
	std ::cout << "default constractor animal is called" << std::endl;
}
Animal :: Animal(std::string type)
{
	this->type = type;
	std ::cout << "constractor with arguments animal  is called" << std::endl;
}
Animal :: Animal(const Animal& copy)
{
	this->type = copy.type;
	std ::cout << "copy constractor animal  is called" << std::endl;
}
Animal& Animal :: operator=(const Animal& a)
{
	this->type = a.type;
	std ::cout << "Animal: operator assignement  is called" << std::endl;
	return(*this);
}
Animal :: ~Animal()
{
	std ::cout << "destractor animal is called" << std::endl;
}
std::string Animal :: getType() const
{
	return(this->type);
}
void Animal :: setType(std::string type)
{
	this->type = type;
}