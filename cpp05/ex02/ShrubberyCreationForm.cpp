#include "ShrubberyCreationForm.hpp"

/*----------------------------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Default constructor called!" << std::endl;
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

