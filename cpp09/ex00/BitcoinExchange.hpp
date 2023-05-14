/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:20 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/14 21:24:27 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <sstream>
#include <iostream>
#include <fstream>
#include <ctime>
#include <map>

class BitcoinExchange
{
	std::map<std::string, double> map;
	std::string file;
	
	public:
		BitcoinExchange(std::map<std::string,double> , char *);
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &src);
		~BitcoinExchange();
		std::map<std::string, double> getMap();
		std::string getFile();
		void read_input_file(std::string filename, std::map<std::string, double> map);
		static int days_in_month(int year, int month);
		int check_date(std::string date_string);
		double check_exchange_rate(std::string exchange_rate);
};
void ft_strtrim(std::string& str);
#endif