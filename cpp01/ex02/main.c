#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "HI THIS IS BRAIN";
    char *stringPTR;
    stringPTR = str;
    char  **stringREF;
    stringREF = &stringPTR;
    printf("L’adresse :\n" );
    printf("%p\n", &str );
    printf("%p\n" ,stringPTR );
    // printf("%p",stringREF );
    printf( "la valeur :\n"  );
    printf("%s\n", str );
    printf("%s\n", stringPTR );
    printf("%s", &stringREF );
}