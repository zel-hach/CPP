/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:26:44 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/29 17:14:07 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat  :: Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std ::cout << "default constractor Cat is called" << std::endl;
}

Cat  :: Cat(const Cat& copy)
{
	*this = copy;
	std ::cout << "copy constractor Cat  is called" << std::endl;
}
Cat& Cat  :: operator=(const Cat& a)
{
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	std ::cout << "Cat : operator assignement  is called" << std::endl;
	return(*this);
}
Cat  :: ~Cat()
{
	delete brain;
	std ::cout << "destractor Cat is called" << std::endl;
}
void Cat  ::makeSound() const
{
	std :: cout << "Cat sound is :myw myw" << std::endl;
}
const Brain* Cat:: getBrain() const
{
	return(this->brain);
}
void Cat :: setBrain(Brain brain)
{
	*this->brain = brain;
}