/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:20:08 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 17:48:44 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

int main(int argc ,char **argv)
{
    std :: ifstream infile;
    std :: ofstream outfile;
    std ::string line;

    if (argc == 4)
    {
        infile.open(argv[1]);
        if (infile.fail())
            std :: cout <<  "file not exist" << std :: endl;
        else
        {
            outfile.open(argv[1] + std::string(".replace"), std::fstream::in | std::fstream::out | std::fstream::app);
            while (getline(infile,line))
            {
                outfile << ReplaceFile(line, argv[2] ,argv[3]);
                outfile << std ::endl;
            }
        }
    }
    return(0);
}