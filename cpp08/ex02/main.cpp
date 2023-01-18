/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:24:31 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/18 20:51:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "stack: " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout <<"copy stack: " << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int> s1(mstack);
	MutantStack<int>::iterator it1 = s1.begin();
	MutantStack<int>::iterator ite1 = s1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
	std:: cout << *it1 << std::endl;
	++it1;
	}
	std::cout <<"operator= stack: " << std::endl;
	MutantStack<int> s2 = s1;
	MutantStack<int>::iterator it2 = s2.begin();
	MutantStack<int>::iterator ite2 = s2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
	std::cout  << *it2 << std::endl;
	++it2;
	}
return 0;
}