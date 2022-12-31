/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:59:55 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 16:53:01 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (){
    // std::cout << "PresidentialPardonForm: Default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (std :: string target):Form(target, 145, 137){
    
    this->target = target;  
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a){
    *this = a;
    // std::cout << "PresidentialPardonForm: Copy constructor called!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a){

    if (this != &a)
        this->target = a.target;
    return(*this);
}

void PresidentialPardonForm::action(void) const
{
    std::cout << target << " a été pardonnée par Zaphod Beeblebrox. " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}

