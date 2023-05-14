/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:45:32 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/14 19:02:45 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



std::map<std::string, double> open_csv_file()
{
    std::ifstream csvfile;
    std::map<std::string, double> mp;
	csvfile.open("data.csv");
	std::string line;
    int count = -1;
	line = "";
	while(getline(csvfile, line))
	{
        count++;
        if (count != 0)
        {
		    std::string date;
		    std::string exchange_rate;
		    std ::stringstream csvstring(line);
		    getline(csvstring,date, ',');
		    getline(csvstring,exchange_rate, ',');
            double exchange_value = atof(exchange_rate.c_str());
            mp[date] = exchange_value;
        }
		line = "";
	}
    return mp;
}

int main(int argc , char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: bad arguments." << std::endl;
        return 0;
    }
    else
    {
        std::map<std::string, double> map = open_csv_file();
        BitcoinExchange b(map, argv[1]);
        b.read_input_file(b.getFile(), b.getMap());
    }
	return(0);
}