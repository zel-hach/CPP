/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:59:47 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/15 23:53:35 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span :: Span()
{
	
}
Span :: Span(unsigned int N)
{
	this->N = N;
}
Span :: Span(const Span& copy)
{
	*this = copy;
}
Span& Span :: operator=(const Span& a)
{
	if(this != &a)
	{
		this->N = a.N;
		this->_vec = a._vec;
	}
	return(*this);
}
void Span :: addNumber(int n)
{
	if (_vec.size() < N)
	{
		_vec.push_back(n);
	}
	else 
		throw std::out_of_range("error:span");
}
unsigned int Span :: get_N() const
{
	return (N);
}
void Span :: set_N(unsigned int n)
{
	this->N = n;
}
unsigned int Span :: shortestSpan()
{
	sort(_vec.begin(),_vec.end());
	for (int i = 0 ;i < _vec.size(); i++)
	{
		
	}
	
}
unsigned int Span :: longestSpan()
{
	sort(_vec.begin(),_vec.end());
}
Span :: ~Span()
{
	
}