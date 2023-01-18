/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:24:17 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/18 20:23:50 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<iostream>
#include <stack>
#include <deque>
#include<vector>

template<typename T,typename Container = std::deque<T> >
class MutantStack : public std::stack<T,Container>{
public:
	MutantStack(): MutantStack<T,Container>::stack()
	{
		
	}
	MutantStack(Container c): MutantStack<T,Container>::stack(c)
	{
		
	}
	MutantStack(const MutantStack& stack): MutantStack<T,Container>::stack(stack){
		
	}
	MutantStack& operator=(const MutantStack& a)
	{
		this->c = a.c;
		return(*this);
	}
	~MutantStack()
	{
		
	};
	typedef typename Container::iterator iterator;
    iterator begin() 
	{ 
		return (this->c.begin()); 
	}
    iterator end()
	{
		 return (this->c.end()); 
	}

};

#endif