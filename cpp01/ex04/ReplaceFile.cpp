#include "ReplaceFile.hpp"

std ::string ReplaceFile(std::string line, std::string s1 ,std::string s2)
{
    std::size_t pos;
    std :: string str;
    std::size_t i;
    i = 0;
    pos = line.find(s1);
    if (pos!=std::string::npos)
    {
    	while (i < pos)
    	{
    	  str.insert(str.end(),line.at(i));
    	  i++;
    	}
    	str.insert(str.size(),line,pos + s1.size());
    	str.insert(pos,s2);
    	return(str);
	}
	return (line);
}