/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:59:47 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/17 19:15:46 by zel-hach         ###   ########.fr       */
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
		throw std::out_of_range("error: short size of vector");
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
	int min = INT_MAX;
	sort(_vec.begin(),_vec.end());
	if(_vec.size() < 2)
		throw std::out_of_range("error: short size");;
	for (unsigned int i = 0 ;i < _vec.size() - 1; i++)
	{
		if (min > abs(_vec[i + 1] - _vec[i]))
			min = abs(_vec[i + 1] - _vec[i]);
	}
	return(min);
}
unsigned int Span :: longestSpan()
{
	sort(_vec.begin(),_vec.end());
	if(_vec.size() < 2)
		throw std::out_of_range("error: short size");
	return(abs(_vec[0] - _vec[_vec.size() - 1]));
}

Span :: ~Span()
{
	// std::cout << "called destractor" << std::endl;
}