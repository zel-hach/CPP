/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:24:52 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 22:36:38 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain()
{
	std::cout << "default constractor Brain is called" << std::endl;
}
Brain :: Brain(const Brain& brain)
{
	*this = brain;
	std::cout << "constractor Brain with arguments is called" << std::endl;
}
Brain& Brain :: operator=(const Brain& brain)
{
	for(int i = 0 ; i < 100; i++)
		this->idea[i] = brain.idea[i];	
	std::cout << "Brain :assignement operator is called" << std::endl;
	return (*this);
}
Brain :: ~Brain()
{
	std::cout << "destractor Brain is called" << std::endl;
}

const std :: string* Brain :: getIdea() const
{
	return(this->idea);
}
void Brain :: setIdea(std :: string idea)
{
	for(int i = 0; i < 100; i++)
		this->idea[i] = idea;
}
