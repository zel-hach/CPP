/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:59:55 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 13:07:13 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (){
    // std::cout << "PresidentialPardonForm: Default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (std :: string target){
   if (getGrad_signe() < 145 || getGrad_execu() < 137)
        throw Form::GradeTooLowException();
    if (getGrad_signe() > 145 || getGrad_execu() > 137)
        throw Form::GradeTooHighException();
    std :: cout <<" Créé un fichier "<< target <<"_shrubbery dans le répertoire courant, et écrit des arbres ASCII à l’intérieur." << std:: endl;  
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a){
    *this = a;
    // std::cout << "PresidentialPardonForm: Copy constructor called!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a){

    if (this != &a){
        // std::cout << "PresidentialPardonForm: Copy assignment operator called!" << std::endl;
    }
    return (*this);
}

void PresidentialPardonForm :: execute(Bureaucrat const & executor)const
{
    if (executor.getGrade() > this->getGrad_execu())
         throw Form::GradeTooHighException();
    /////
}
PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}

