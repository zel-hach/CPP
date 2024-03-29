/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:47:54 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/03 13:05:34 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat()
{
	
}
Bureaucrat :: Bureaucrat(std :: string const Name, int Grade):name(Name)
{
	if (Grade <= 0 )
		throw Bureaucrat::GradeTooHighException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = Grade;
}
Bureaucrat :: Bureaucrat(const Bureaucrat& copy)
{
	this->grade = copy.grade;
}

Bureaucrat :: Bureaucrat(std :: string const * Name, int Grade):name(Name != NULL ? *Name : "")
{
	if (Grade <= 0 )
		throw Bureaucrat::GradeTooHighException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
		this->grade = Grade;
}

Bureaucrat& Bureaucrat :: operator=(const Bureaucrat& a)
{
	if (this!=&a)
	{
		this->grade = a.grade;
	}
	return(*this);
}
Bureaucrat :: ~Bureaucrat()
{
	
}
std :: string Bureaucrat :: getName()const
{
	return(this->name);
}
int Bureaucrat::getGrade() const
{
	return(this->grade);
}
void Bureaucrat :: setGrade(int Grade)
{
	if (Grade <= 0 )
		throw Bureaucrat::GradeTooHighException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = Grade;
}
void Bureaucrat :: inc_Echel()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}
void Bureaucrat :: dec_Echel()
{
	if (this->grade >= 150)
			throw Bureaucrat::GradeTooLowException();
	this->grade++;
}
const char* Bureaucrat ::GradeTooHighException :: what() const throw()
{
	return("Grade Too High");
}
const char* Bureaucrat ::GradeTooLowException :: what() const throw()
{
	return("Grade Too Low");
}

void Bureaucrat ::executeForm(Form const & form)
{
	try{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e){
			std::cout << e.what() << '\n';
	}
}
void Bureaucrat :: signForm(Form& f){
	if (f.getSigne())
		std::cout << this->name << " signed " << f.getName()  << std::endl;
	else
		std::cout << this->name << " couldn’t sign " << f.getName() << " because they need to work harder. " << std::endl;
}
std ::ostream& operator<<(std::ostream& o,const Bureaucrat& a)
{
	o << a.getName() << " bureaucrat " << a.getGrade() << std::endl;
	return(o);
}
