#include <sstream>
#include <iostream>
#include <fstream>
#include <ctime>
#include <map>


static int days_in_month(int year, int month)
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

std::time_t getTime(int year, int month, int day) {
    std::tm date = {};
    date.tm_year = year - 1900; 
    date.tm_mon = month - 1;    
    date.tm_mday = day;         
    return std::mktime(&date);
}

int check_date(std::map<std::string, double>::iterator date_string)
{
    std::map<std::string, double>::iterator mp (date_string);
    std::time_t now = std::time(NULL);
    std::tm* date = std::gmtime(&now);
    int years ;
    int month;
    int day;
    int tab[3];
    std::stringstream ss;
    ss << mp->first;
    std::string str = ss.str();
    if (str.length() == 10)
    {
        std::string result = ss.str();
        const char* cstr = result.c_str();
        char *p = std::strtok ((char *)cstr,"-");
        int i = 0;
        while (p!=0)
        {
            tab[i] = atoi(p);
            p = std::strtok(NULL,"-");
            i++;
        }
        if (i == 3)
        {
            years = tab[0];
            month = tab[1];
            day = tab[2];
            if (month < 1 || month > 12 || day < 1 || day > days_in_month(years, month) || years > date->tm_year + 1900)
                return -1;
            std::time_t date_exist = getTime(years, month, day);
            std::tm* date1 = std::gmtime(&date_exist);
            char buffer[80];
            std::strftime(buffer, 80, "%F", date1);
        }
        else
            return -1;
    }
    else
        return -1;
    ss.str("");
    ss.clear();
    return 0;
}
void ft_strtrim(std::string& str)
{
	str.erase(0, str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
}

 double check_exchange_rate(std::string exchange_rate)
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


std::map<std::string, double> read_input_file(std::string filename, int argc) {

    std::ifstream inputfile;
	double exchange_rate;
    int count = -1;
	std::map<std::string, double> mp;
	inputfile.open(filename);
	std::string line1;
	if(argc == 2)
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
			    getline(inputstring,exchange_rate1, '|');
			    ft_strtrim(date1);
			    ft_strtrim(exchange_rate1);
			    exchange_rate = check_exchange_rate(exchange_rate1);
		        mp[date1] = exchange_rate;
			    line1 = "";
			}
        }
	}
    else
        std::cout << "number of lines in the file: " << count << std::endl;
    return mp;
}
void open_csv_file(std::map<std::string, double>::iterator date_string, std::map<std::string, double> map)
{
    std::ifstream csvfile;
    std::map<std::string, double>::iterator mp (date_string);
    std::stringstream ss;
    ss << mp->first;
    std::string str = ss.str();
	csvfile.open("data.csv");
	std::string line;
    std::map<std::string, double>::iterator value_lower (map.upper_bound(str));
    // std::stringstream ss1;

	line = "";
	while(getline(csvfile, line))
	{
		std::string date;
		std::string exchange_rate;
		std ::stringstream csvstring(line);
		getline(csvstring,date, ',');
		getline(csvstring,exchange_rate, ',');
        ft_strtrim(date);
        ft_strtrim(exchange_rate);
        double exchange_value = atof(exchange_rate.c_str());
        // double value = atof();
        if (str == date)
             std::cout << mp->first << " => " << mp->second << " = " << mp->second * exchange_value << '\n';
        // else
            // std::cout << mp->first << " => " << mp->second << " = " <<  * exchange_value << '\n';
		line = "";
	}
}

int main(int argc , char **argv)
{
	int valid_date;
    std::map<std::string, double> map = read_input_file(argv[1], argc);
        for(std::map<std::string, double>::iterator it = map.begin(); it != map.end(); ++it)
        {
            valid_date = check_date(it);
            try{
                if (valid_date == -1)
                    throw std::invalid_argument("Error: bad input =>" + it->first);
                if (it->second == -1)
                    throw std::invalid_argument("Error: not a positive number.");
                if (it->second == -2)
                    throw std::invalid_argument("Error: not a valid number.");
                if (it->second == -3)
                    throw std::invalid_argument("Error: too large a number.");
                else
                    open_csv_file(it, map);
                    // std::cout << it->first << " => " << it->second << '\n';
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
        }
        }
	return(0);
}