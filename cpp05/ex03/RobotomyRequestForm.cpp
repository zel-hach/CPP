/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:50:08 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 16:53:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Default constructor called!" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std :: string target):Form(target, 72, 45){
    this->target = target;
}
/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a){
    *this = a;
    std::cout << "RobotomyRequestForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a){
    if (this != &a){
        this->target = a.target;
    }
    return(*this);
}
void RobotomyRequestForm:: action(void) const
{
    srand(time(0));
    if (rand()%4 + 1 <= 2)
        std::cout << "l’opération a échoué." << std :: endl;
    if(rand()%4 + 1 > 2)
        std::cout << "la " << target << " a été robotomisée avec succès" << std :: endl;
}
/*----------------------------------------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Destructor called!" << std::endl;
}

