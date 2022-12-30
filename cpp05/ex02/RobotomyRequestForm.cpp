#include "RobotomyRequestForm.hpp"

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Default constructor called!" << std::endl;
}

/*----------------------------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a){
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

