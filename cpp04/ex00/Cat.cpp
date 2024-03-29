/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:26:44 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 18:06:50 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat  :: Cat()
{
	this->type = "Cat";
	std ::cout << "default constractor Cat is called" << std::endl;
}

Cat  :: Cat(const Cat& copy)
{
	this->type = copy.type;
	std ::cout << "copy constractor Cat  is called" << std::endl;
}
Cat& Cat  :: operator=(const Cat& a)
{
	this->type = a.type;
	std ::cout << "Cat : operator assignement  is called" << std::endl;
	return(*this);
}
Cat  :: ~Cat()
{
	std ::cout << "destractor Cat is called" << std::endl;
}
void Cat  ::makeSound() const
{
	std :: cout << "Cat sound is :myw myw" << std::endl;
}