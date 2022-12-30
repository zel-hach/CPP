/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:02:45 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/30 22:29:19 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
#define _FORM_HPP
#include "Bureaucrat.hpp"
class Form
{
	const std::string name;
	bool signe;
	const int grad_signe;
	const int grad_execu;
	public:
		Form();
		Form(const std::string , const int, const int);
		Form(const Form&);
		Form& operator=(const Form&);
		std :: string getName()const;
		int getGrad_signe() const;
		int getGrad_execu() const;
		bool getSigne();
		~Form();
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