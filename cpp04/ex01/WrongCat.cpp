/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:26:44 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 19:21:11 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat()
{
	this->type = "WrongCat";
	std ::cout << "default constractor WrongCat is called" << std::endl;
}

WrongCat:: WrongCat(const WrongCat& copy)
{
	this->type = copy.type;
	std ::cout << "copy constractor WrongCat is called" << std::endl;
}
WrongCat& WrongCat:: operator=(const WrongCat& a)
{
	this->type = a.type;
	std ::cout << "WrongCat : operator assignement  is called" << std::endl;
	return(*this);
}
WrongCat:: ~WrongCat()
{
	std ::cout << "destractor WrongCat is called" << std::endl;
}
void WrongCat::makeSound() const
{
	std :: cout << "WrongCat sound is :myw myw" << std::endl;
}