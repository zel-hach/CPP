/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:02 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 16:52:52 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm : public Form{
    std :: string target;
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (std::string);
    PresidentialPardonForm (const PresidentialPardonForm &a);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
    void action(void) const;
    ~PresidentialPardonForm ();
};

#endif

