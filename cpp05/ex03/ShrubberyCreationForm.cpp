/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:54:52 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 16:53:18 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (std :: string target):Form(target, 25, 5){
    this->target = target;
}
/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a){
        *this = a;
}

/*----------------------------------------------------------------------------*/
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a){
    if (this != &a){
        this->target = a.target;
    }
    return(*this);
}
void ShrubberyCreationForm:: action(void) const
{
    std :: ofstream outfile;
    outfile.open(target + "_shrubbery", std ::ios::out | std::ios::trunc);
    if (outfile.good())
    {
           outfile << "       _-_\n"
                    "    /~~   ~~\\\n"
                    " /~~         ~~\\\n"
                    "{               }\n"
                    " \\  _-     -_  /\n"
                    "   ~  \\ //  ~\n"
                    "_- -   | | _- _\n"
                    "  _ -  | |   -_\n"
                    "      // \\ " << std::endl;
    }
    else
        std::cout << "file not create";
    outfile.close();
}
/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Destructor called!" << std::endl;
}

