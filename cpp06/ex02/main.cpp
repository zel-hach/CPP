/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:47:30 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/02 22:44:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Base{
	public:
		virtual ~Base();
};
class A :public Base
{
};
class B :public Base
{
};
class C :public Base
{
};

Base * generate(void)
{
	srand(time(0));
	if (rand()% 3 + 1 == 0)
		return(new A());
	if (rand()% 3 + 1 == 1)
		return(new B());
	if (rand()% 3 + 1 == 2)
		return(new C());
}
void identify(Base* p)
{
	if (p = nullptr)
		std :: cout << "NULL pointer " << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}
void identify(Base& p)
{
	try{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast& bd)
	{
		std::cout << bd.what() << std::endl;
	}
	try{
		B a = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast& bd)
	{
		std::cout << bd.what() << std::endl;
	}

	try{
		C a = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast& bd)
	{
		std::cout << bd.what() << std::endl;
	}
}