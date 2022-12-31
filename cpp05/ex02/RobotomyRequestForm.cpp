/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:50:08 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 11:54:35 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Default constructor called!" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std :: string target){
   if (getGrad_signe() < 72 || getGrad_execu() < 45)
        throw Form::GradeTooLowException();
    if (getGrad_signe() > 72 || getGrad_execu() > 45)
        throw Form::GradeTooHighException();
    std :: cout << "Fait des bruits de perceuse. Ensuite, informe que la" << target << " a été robotomisée avec succès 50%" << " du temps. Dans le cas contraire, informe que l’opération a échoué" << std :: endl;
}
/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a){
    *this = a;
    std::cout << "RobotomyRequestForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a){
    if (this != &a){
        std::cout << "RobotomyRequestForm: Copy assignment operator called!" << std::endl;
    }
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Destructor called!" << std::endl;
}

