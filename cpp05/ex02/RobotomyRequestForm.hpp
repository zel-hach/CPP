/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:00:41 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/31 17:13:11 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"
class RobotomyRequestForm : public Form{
    std :: string target;
public:
    RobotomyRequestForm ();
    RobotomyRequestForm (std :: string);
    RobotomyRequestForm (const RobotomyRequestForm &a);
    RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
    void action(void) const;
    ~RobotomyRequestForm ();
};

#endif

