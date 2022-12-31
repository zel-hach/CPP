/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:26:04 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 18:05:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
/*----------------------------------------------------------------------------*/
Intern::Intern (){
    std::cout << "Intern: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Intern::Intern (const Intern &a){
    *this = a;
    std::cout << "Intern: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
Intern & Intern::operator = (const Intern &a){
    if (this != &a){
        std::cout << "Intern: Copy assignment operator called!" << std::endl;
    }
    return(*this);
}

/*----------------------------------------------------------------------------*/
Intern::~Intern (){
    std::cout << "Intern: Destructor called!" << std::endl;
}

Form* Intern:: makeForm(std::string name, std::string target)
{
    std::string str[3] = {"robotomy request", "ShrubberyCreation", "presidential pardon"};
    Form *f;
    int choix;
    
    for(int i = 0; i < 3 ; i++)
        if(name == str[i])
        choix = i;
    switch (choix)
    {
        case 0:
            f = new ShrubberyCreationForm(target);
            break;
        case 1:
            f = new RobotomyRequestForm(target);
            break;
        case 2:
            f = new PresidentialPardonForm(target);
            break;
        default:
            throw Form ::GradeTooLowException();
        break;
        }
    std :: cout << "Intern creates " << f->getName() << std::endl;
    return(f);
}
