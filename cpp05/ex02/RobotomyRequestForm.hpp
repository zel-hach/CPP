/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:41 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 12:48:16 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include <iostream>
#include "Form.hpp"
class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm ();
    RobotomyRequestForm (std :: string);
    RobotomyRequestForm (const RobotomyRequestForm &a);
    RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
    ~RobotomyRequestForm ();
    void execute(Bureaucrat const & executor)const;
};

#endif

