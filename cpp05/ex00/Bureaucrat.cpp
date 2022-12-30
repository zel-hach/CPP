/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:47:54 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/30 20:53:45 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat :: Bureaucrat()
{
	
}
Bureaucrat :: Bureaucrat(std :: string const Name, int Grade):name(Name)
{
	if (Grade <= 0 )
		throw Bureaucrat::GradeTooLowException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade = Grade;
}
Bureaucrat :: Bureaucrat(const Bureaucrat& copy)
{
	this->grade = copy.grade;
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
		throw Bureaucrat::GradeTooLowException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade = Grade;
}
void Bureaucrat :: inc_Echel()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooLowException();
	this->grade--;
}
void Bureaucrat :: dec_Echel()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooHighException();
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
std ::ostream& operator<<(std::ostream& o,const Bureaucrat& a)
{
	o << a.getName() << " bureaucrat " << a.getGrade() << std::endl;
	return(o);
}
