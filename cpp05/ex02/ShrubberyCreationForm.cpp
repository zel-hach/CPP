/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:54:52 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 11:57:49 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (std :: string target){
     if (getGrad_signe() < 25 || getGrad_execu() < 5)
        throw Form::GradeTooLowException();
    if (getGrad_signe() > 25 || getGrad_execu() > 5)
        throw Form::GradeTooHighException();
    std :: cout << "Informe que la" << target << "a été pardonnée par Zaphod Beeblebrox" << std :: endl;
}
/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a){
    std::cout << "ShrubberyCreationForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a){
    if (this != &a){
        std::cout << "ShrubberyCreationForm: Copy assignment operator called!" << std::endl;
    }
}

/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Destructor called!" << std::endl;
}

