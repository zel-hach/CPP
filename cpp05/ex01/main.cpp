/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:52:58 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/03 13:15:59 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat d;
	Bureaucrat c("sahar",12);
	try
	{
		Bureaucrat b("faiza",12);
		Form f("test",13,24);
		f.beSigned(b);
		b.signForm(f);
		std :: cout << f;
		b.setGrade(100);
		try{
			b.dec_Echel();
			b.inc_Echel();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << c;
}