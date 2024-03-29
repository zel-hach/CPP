/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:07:55 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/16 15:55:56 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP
#define _ARRAY_HPP

#include <iostream>
template <typename T>
class Array{
	T *array;
	unsigned int  N;
	public:
		Array();
		Array(unsigned int);
		Array(const Array<T>&);
		Array& operator=(const Array&);
		T& operator[](unsigned int);
		int size() const;
		~Array();
		
};
template <typename T>
Array<T> :: Array()
{
	std::cout << "default constructor called" << std::endl;
	this->array = new T[0];
}
template <typename T>
Array<T> :: Array(unsigned int  n)
{
	std::cout << "constructor with parametre called" << std::endl;
	this->N = n;
	this->array = new T[this->N];
}
template <typename T>
Array<T>::Array(const Array<T>& copy)
{
	*this = copy;
}
template <typename T>
T& Array<T> :: operator[](unsigned int index){
	if (index >= N)
		throw std::exception();
	return(this->array[index]);
}
template <typename T>
Array<T> &Array<T> :: operator=(const Array &a)
{
	if(this != &a)
	{
		this->N = a.N;
		this->array = new T[this->N];
		std::copy(a.array, a.array + size(), this->array);
	}
	return(*this);
}
template <typename T>
int Array<T>:: size() const
{
	return(this->N);
}
template <typename T>
Array<T>::~Array()
{
	delete array;
	std::cout << "destructeur called" << std::endl;
}
#endif