
// #include <iostream>
// #include <cstdio>
// #include <cstring>
// #include <ctime>
// static int days_in_month(int year, int month)
// {
//     switch (month)
//     {
//         case 2:
//             if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//                 return 29;
//             else
//                 return 28;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             return 30;
//         default:
//             return 31;
//     }
// }
// std::time_t getTime(int year, int month, int day) {
//     std::tm date = {0};
//     date.tm_year = year - 1900; 
//     date.tm_mon = month - 1;    
//     date.tm_mday = day;         
//     return std::mktime(&date);
// }
// int main()
// {
//     std::string str ("  2023-02 03  ");
//     str.erase(0, str.find_first_not_of(" \t\r\n")); // Remove leading whitespace
//     str.erase(str.find_last_not_of(" \t\r\n") + 1); // Remove trailing whitespace
//     std::cout << "----" << str <<"----" << std::endl;
    // std::time_t now = std::time(NULL);
    // std::tm* date = std::gmtime(&now);
    // int years ;
    // int month;
    // int day;
    // int tab[3];
    // if (str.length() == 10)
    // {
    //     char * cstr = new char [str.length()+1];
    //     std::strcpy (cstr, str.c_str());
    //     char * p = std::strtok (cstr,"-");
    //     int i = 0;
    //     while (p!=0)
    //     {
    //         tab[i] = atoi(p);
    //         std::cout << tab[i] << '\n';
    //         p = std::strtok(NULL,"-");
    //         i++;
    //     }
    //     if (i == 3)
    //     {
    //         years = tab[0];
    //         month = tab[1];
    //         day = tab[2];
    //         if (month < 1 || month > 12 || day < 1 || day > days_in_month(years, month) || years > date->tm_year + 1900)
    //         {
    //             std::cout << "date not exist " << std::endl;
    //             return 0;
    //         }
    //         std::time_t date_exist = getTime(years, month, day);
    //         std::tm* date1 = std::gmtime(&date_exist);
    //         char buffer[80];
    //         std::strftime(buffer, 80, "%F", date1);
    //         std::cout << "The current date is: " << buffer << std::endl;
    //     }
    //     else
    //         std::cout << "invalid date format" << std::endl;
    //     delete[] cstr;
    // }
    // else
    //     std::cout << "invalid date format" << std::endl;
// return 0;
// }

#include <iostream>
#include <cstdlib> // for atof
#include <string>

int main() {
    std::string str = "3.14";
    double num = 0;
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '.')
            count++;
        if (!std::isdigit(str[i]) && str[i] != '.')
        {
            std::cout << str[i] << std::endl;
            std::cout << "invalid input" << std::endl;
            break;
        }
        num = std::atof(str.c_str());
        i++;
    }
    if (count > 1)
        std::cout << "invalid input" << std::endl;
    else
        std::cout << num << std::endl;
    return 0;
}