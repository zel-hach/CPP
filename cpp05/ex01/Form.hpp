/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:02:45 by zel-hach          #+#    #+#             */
/*   Updated: 2023/01/02 11:18:40 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
#define _FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	const std::string name;
	const int grad_signe;
	const int grad_execu;
	bool signe;
	public:
		Form();
		Form(const std::string , const int, const int);
		Form(const Form&);
		Form& operator=(const Form&);
		std :: string getName()const;
		int getGrad_signe() const;
		int getGrad_execu() const;
		bool getSigne();
		virtual ~Form();
		class GradeTooHighException : public std ::exception{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std ::exception{
			virtual const char* what() const throw();
		};
		void beSigned(Bureaucrat);
};
std ::ostream& operator<<(std::ostream& ,const Form&);
#endif