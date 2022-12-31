/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:02 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 12:48:10 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (std::string);
    PresidentialPardonForm (const PresidentialPardonForm &a);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
    ~PresidentialPardonForm ();
    void execute(Bureaucrat const & executor)const;
};

#endif

