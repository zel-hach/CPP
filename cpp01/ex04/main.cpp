#include "ReplaceFile.hpp"

int main(int argc ,char **argv)
{
    if (argc > 1)
    {
        std :: ifstream infile;
        std :: ofstream outfile;

        outfile.open(argv[2]);
        infile.open(argv[1]);
        std ::string line;
        while (getline(infile,line))
        {
            outfile << ReplaceFile(line, argv[3] ,argv[4]);
            outfile << std ::endl;
        }
    }
    return(0);
}