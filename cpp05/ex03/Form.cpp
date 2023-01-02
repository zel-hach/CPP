/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:02:41 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/02 13:39:26 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form :: Form():name("sahar"),grad_signe(10),grad_execu(1),signe(0)
{
	
}
Form :: Form(const std::string Name, const int signe_g, const int signe_e):name(Name),grad_signe(signe_g),grad_execu(signe_e),signe(0)
{
	if (signe_e <= 0 || signe_g <= 0)
		throw Form::GradeTooHighException();
	if (signe_e > 150 || signe_g > 150)
		throw Form::GradeTooLowException();
}
Form :: Form(const Form& copy):name(copy.name),grad_signe(copy.grad_signe),grad_execu(copy.grad_execu),signe(copy.signe)
{

}
Form& Form :: operator=(const Form& a)
{
	if (this != &a)
		this->signe=a.signe;
	return(*this);
}
std :: string Form :: getName()const
{
	return(this->name);
}
int Form :: getGrad_signe() const
{
	return(this->grad_signe);
}
int Form :: getGrad_execu() const
{
	return(this->grad_execu);
}
bool Form :: getSigne()
{
	return(this->signe);
}
Form :: ~Form()
{
	
}
const char* Form ::GradeTooHighException :: what() const throw()
{
	return("Form Grade Too High");
}
const char* Form :: GradeTooLowException :: what() const throw()
{
	return("Form Grade Too Low");
}
void Form :: beSigned(Bureaucrat b)
{
	if (b.getGrade() > this->grad_signe)
		throw Form ::GradeTooLowException();
	signe = 1;
}
void Form :: execute(Bureaucrat const & executor) const
{
	if (this->signe == 1 && executor.getGrade() < this->getGrad_execu())
		this->action();
	else
		throw Form ::GradeTooLowException();
		
}
std ::ostream& operator<<(std::ostream& o,const Form& a)
{
	o << "Form est : " << a.getName() << " son grade requis pour le signer est : " << a.getGrad_signe() << " &&  son grade constant requis pour l’exécuter est : " << a.getGrad_execu() << std::endl;
	return(o);
}	
