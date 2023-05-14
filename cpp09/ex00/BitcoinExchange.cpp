/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:17 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/14 21:24:14 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::map<std::string, double> map, char *file)
{
	this->map = map;
	this->file = file;
}

BitcoinExchange::~BitcoinExchange() 
{
	
}

std::map<std::string , double> BitcoinExchange::getMap() 
{
	return this->map;
}

std::string BitcoinExchange::getFile()
{
	return this->file;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
	if (this != &src)
	{
		this->map = src.map;
		this->map = src.map;
	}
	return *this;
}

int BitcoinExchange::check_date(std::string date_string)
{
    std::string mp(date_string);
    std::time_t now = std::time(NULL);
    std::tm* date = std::gmtime(&now);
    int tab[3];
    if (mp.length() == 10)
    {
        const char* cstr = mp.c_str();
        char *p = std::strtok ((char *)cstr,"-");
        int i = 0;
        while (p!=0)
        {
            tab[i] = atoi(p);
            p = std::strtok(NULL,"-");
            i++;
        }
        if (i == 3 && (tab[1] < 1 || tab[1] > 12 || tab[2] < 1 || tab[2] > days_in_month(tab[0], tab[1]) || tab[0] > date->tm_year + 1900))
                	return -1;
    }
    else
        return -1;
    return 0;
}

 double BitcoinExchange::check_exchange_rate(std::string exchange_rate)
 {
	 std::string str (exchange_rate);
    double num = 0;
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '.')
            count++;
        if (!std::isdigit(str[i]) && str[i] != '.')
           return -1;
        num = std::atof(str.c_str());
        i++;
    }
    if (count > 1)
        return -2;
    if(num < 0)
        return -1;
    if(num > 1000)
		return -3;
    else
       return(num);
 }
void BitcoinExchange::read_input_file(std::string filename, std::map<std::string, double> map) {

    std::ifstream inputfile;
	int valide_date;
	double exchange_rate;
    int count = -1;
	inputfile.open(filename);
	std::string line1;
	if(inputfile.is_open())
	{
		line1 = "";
		while(getline(inputfile, line1))
		{
            count++;
            if (count != 0)
            {
			    std::string date1;
			    std::string exchange_rate1;
				ft_strtrim(line1);
			    std ::stringstream inputstring(line1);
			    getline(inputstring,date1, '|');
				ft_strtrim(date1);										
			    getline(inputstring,exchange_rate1, '|');
			    ft_strtrim(exchange_rate1);
			    exchange_rate = check_exchange_rate(exchange_rate1);
				valide_date = check_date(date1);
                std::map<std::string, double>::iterator lower_value = map.lower_bound(date1);
                for(std::map<std::string, double>::iterator it = map.begin(); it != map.end(); ++it)
                {
					if (lower_value != map.begin())
						lower_value--;
                    if (exchange_rate > 0 && valide_date == 0)
                    {
                        if (it->first == date1)
                            std::cout << date1 << " => " << exchange_rate << " = " << it->second * exchange_rate << std::endl;
                        else
                            std::cout << date1 << " => " << exchange_rate << " = " << lower_value->second * exchange_rate << std::endl;
                        break;
                    }
                }
                if (valide_date == 0)
                {
                    if (exchange_rate == -1)
                        std::cout << "Error: not a positive number." << std::endl;
                    if (exchange_rate == -2)
                        std::cout << "Error: not a valid number." << std::endl;
                    if (exchange_rate == -3)
                        std::cout << "Error: too large a number." << std::endl;
                }
                else
                    std::cout << "Error: bad input =>" << date1 << std::endl;
			}
			line1 = "";
        }
	}
    else
        std::cout << "number of lines in the file: " << count << std::endl;
}

int BitcoinExchange:: days_in_month(int year, int month)
{
    switch (month)
    {
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                return 29;
            else
                return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

void ft_strtrim(std::string& str)
{
	str.erase(0, str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
}