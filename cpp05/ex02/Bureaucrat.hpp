/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:24:40 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/03 13:06:25 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
#define  _BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	std :: string const name;
	int grade;
	public:
		Bureaucrat();
		Bureaucrat(std :: string const,int);
		Bureaucrat(std :: string const *, int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();
		std :: string getName()const;
		int getGrade() const;
		void setGrade(int);
		void inc_Echel();
		void dec_Echel();
		class GradeTooHighException : public std ::exception{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std ::exception{
			virtual const char* what() const throw();
		};
		void signForm(Form&);
		void executeForm(Form const & form);
};
std ::ostream& operator<<(std::ostream& ,const Bureaucrat&);
#endif