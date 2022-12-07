#include "ReplaceFile.hpp"

int main(int argc ,char **argv)
{
    if (argc >= 1)
    {
        std :: ifstream infile;
        std :: ofstream outfile;

        outfile.open("test.replace", std::fstream::in | std::fstream::out | std::fstream::app);
        infile.open(argv[1]);
        std ::string line;
        while (getline(infile,line))
        {
            outfile << ReplaceFile(line, argv[2] ,argv[3]);
            outfile << std ::endl;
        }
    }
    return(0);
}