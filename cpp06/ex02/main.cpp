/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:47:30 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/17 21:02:09 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base :: ~Base(){
	std::cout << "---------------" << std::endl;
		};
Base * generate(void)
{
	srand(time(0));
	int i = rand() % 3 + 1;
	if ( i == 1)
		return(new A());
	if (i == 2)
		return(new B());
	if (i == 3)
		return(new C());
	return(NULL);
}
void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std :: cout << "invalid cast " << std::endl;
}
void identify(Base& p)
{
	try{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast& bd)
	{
		try{
			B a = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(std::bad_cast& bd)
		{
			try{
				C a = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch(std::bad_cast& bd)
			{
				std::cout << bd.what() << std::endl;
			}
		}
	}
}

int main()
{
	Base *p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
}