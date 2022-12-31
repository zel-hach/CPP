/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:52:58 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 13:56:10 by zel-hach         ###   ########.fr       */
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
		// std :: cout << f << std :: endl;
		// b.setGrade(100);
		// try{
		// 	b.dec_Echel();
		// 	b.inc_Echel();
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cout << e.what() << '\n';
		// }
		// std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << c;
}