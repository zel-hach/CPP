/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:12:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/29 17:25:30 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
        const std::string    *tab;
        Cat org;
        org.getBrain()->setIdea("Drink water");
        {
            Cat cpy(org);
            cpy.getBrain()->setIdea("Drink choco");
            // delete cpy;
        }
        tab = org.getBrain()->getIdea();
        for(int i = 0; i < 3; i++)
            std::cout << tab[i] << std::endl;
        //delete org;
 return 0;
}