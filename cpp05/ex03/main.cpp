/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:52:58 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/03 21:46:51 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	// ShrubberyCreationForm
	{
		try
		{
			Bureaucrat	b1("Rowan", 120);
			Bureaucrat	b2("Eden", 140);
			ShrubberyCreationForm sh("forest");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// RobotomyRequestForm
	{
		try
		{
			Bureaucrat	b1("alpha", 20);
			Bureaucrat	b2("beta", 60);
			RobotomyRequestForm sh("andromeda");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// WrongPresidentialPardonForm
	{
		try
		{
			Bureaucrat	b1("Reaper", 20);
			Bureaucrat	b2("Guardian", 60);
			PresidentialPardonForm sh("Lost Soul");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	// PresidentialPardonForm
	{
		try
		{
			Bureaucrat	b1("Reaper", 3);
			Bureaucrat	b2("Guardian", 20);
			PresidentialPardonForm sh("Lost Soul");
		
			sh.beSigned(b2);	
			b2.signForm(sh);
			b1.executeForm(sh);
		}
		catch (std::exception& e)
		{
			std::cout << "Something went wrong: " << e.what() << std::endl;
		}
	}
	{
		Intern someRandomIntern;
		Form* rrf;
		try{
			rrf = someRandomIntern.makeForm("tttt", "Bender");
			std :: cout << *rrf<< std::endl;
			delete rrf;		
		}
		catch(const char* e)
		{
			std::cout << e << std::endl;
		}
	}
		return 0;
}