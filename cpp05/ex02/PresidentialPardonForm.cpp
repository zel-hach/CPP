/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:59:55 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/30 22:59:56 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a){
    std::cout << "PresidentialPardonForm: Copy constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a){
    if (this != &a){
        std::cout << "PresidentialPardonForm: Copy assignment operator called!" << std::endl;
    }
}

/*----------------------------------------------------------------------------*/
PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}

