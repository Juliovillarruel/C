#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    printf("\t\t\t\t--------------------------\n");
    printf("\t\t\t\t\b|Hello, How can I help you?|\n");
    printf("\t\t\t\t--------------------------\n");

    int value; 
    scanf("%jd", value);

    if(value == 5)
    {
        printf("we have a 5");
    }

}