/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:26:19 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 22:43:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std ::cout << "default constractor Dog is called" << std::endl;
}
Dog :: Dog(const Dog& copy)
{
	*this = copy;
	std ::cout << "copy constractor Dog is called" << std::endl;
}
Dog& Dog :: operator=(const Dog& a)
{
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	std ::cout << "Dog: operator assignement  is called" << std::endl;
	return(*this);
}
Dog :: ~Dog()
{
	delete brain;
	std ::cout << "destractor Dog is called" << std::endl;
}
void Dog :: makeSound() const
{
	std :: cout << "Dog sound is :how how" << std::endl;
}
const Brain* Dog:: getBrain() const
{
	return(this->brain);
}
void Dog :: setBrain(Brain brain)
{
	*this->brain = brain;
}