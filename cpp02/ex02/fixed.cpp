/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:10 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/23 17:35:31 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

const int Fixed :: n_bits = 8;

Fixed :: Fixed()
{
	this->val  = 0;
}

Fixed :: Fixed(const int val)
{
	this->val = val << this->n_bits;
}
Fixed :: Fixed(const float val)
{
	this->val = roundf(val * (1 << this->n_bits));
}
		
Fixed :: Fixed(const Fixed &p)
{
	this->val = p.val;
}
Fixed Fixed :: operator =(const Fixed &p)
{
	this->val = p.val;
	return(p);
}
int Fixed :: getRawBits( void ) const
{
	return (this->val);
}
void Fixed :: setRawBits( int const raw )
{
	this->val = raw;
}

float Fixed :: toFloat( void ) const
{
	return ((float )this->val / (1 << this->n_bits));
}
int Fixed :: toInt( void ) const
{
	return (this->val >> this->n_bits);
}
		
Fixed :: ~Fixed()
{
	
}

bool Fixed ::  operator <(const Fixed &rh) const
{
	return(this->val < rh.getRawBits());
}
bool Fixed ::  operator >(const Fixed &rh) const
{
	return(this->val > rh.getRawBits());
}
bool Fixed ::  operator <=(const Fixed &rh) const
{
	return(this->val <= rh.getRawBits());
}
bool Fixed ::  operator >=(const Fixed &rh) const
{
	return(this->val >= rh.getRawBits());
}
bool Fixed ::  operator ==(const Fixed &rh) const
{
	return(this->val == rh.getRawBits());
}
bool Fixed ::  operator !=(const Fixed &rh) const
{
	return(this->val != rh.getRawBits());
}
Fixed Fixed ::  operator +(const Fixed &rh) const
{
	Fixed s;
	s.val = this->val + rh.getRawBits();
	return(s);
}
Fixed Fixed ::  operator -(const Fixed &rh) const
{
	Fixed s;
	s.val = this->val - rh.getRawBits();
	return(s);
}
Fixed Fixed ::  operator *(const Fixed &rh) const
{
	Fixed s;

	s.val = (this->toFloat() * rh.toFloat()) * (1 << this->n_bits);
	return(s);
}
Fixed Fixed ::  operator /(const Fixed &rh) const
{
	Fixed s;
	s.val = (this->toFloat() / rh.toFloat()) * (1 << this->n_bits);
	return(s);
}

Fixed Fixed :: operator ++(int)
{
	Fixed	tmp;
	tmp.val = this->val;
	val++;
	return(tmp);
}
Fixed& Fixed :: operator ++(void)
{
	val++;
	return(*this);
}
Fixed Fixed :: operator --(int)
{
	Fixed	tmp;
	tmp.val = this->val;
	val--;
	return(tmp);
}
Fixed& Fixed :: operator --(void)
{
	val--;
	return(*this);
}

const Fixed Fixed:: min(const Fixed &a, const Fixed &b)
{
	if (a<b)
		return(a);
	else
		return(b);
}

Fixed Fixed:: min(Fixed &a, Fixed &b)
{
	if (a<b)
		return(a);
	else
		return(b);
}
const Fixed Fixed:: max(const Fixed &a, const Fixed &b)
{
	if(a>b)
		return(a);
	else
		return(b);
}
Fixed Fixed:: max(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	else
		return(b);
}
std ::ostream &operator << (std :: ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}