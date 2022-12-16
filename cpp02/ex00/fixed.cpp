/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:10 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/16 17:27:55 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

const int Fixed :: n_bits = 8;

Fixed :: Fixed()
{
	this->val  = 0;
	std :: cout << "Default constructor called" << std::endl;
}
Fixed :: Fixed(const Fixed &p)
{
	this->val = p.val;
	std :: cout << "Copy constructor called"<< std::endl;
}
Fixed Fixed :: operator =(const Fixed &p)
{
	this->val = p.val;
	std :: cout << "Copy assignment operator called " << std::endl;
	return(p);
}
int Fixed :: getRawBits( void ) const
{
	std :: cout <<  "getRawBits member function called "<< std::endl;
	return (this->val);
}
void Fixed :: setRawBits( int const raw )
{
	this->val = raw;
}
Fixed :: ~Fixed()
{
	std :: cout <<  "Destructor called" << std::endl;
}