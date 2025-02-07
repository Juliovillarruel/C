#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char firstName[20];


    printf("\n\n\t\t\t<<<Hello User>>>\n\n");
    printf("What is your first name\n\n");

    scanf("%s", firstName);

    printf("Hello %s\n\n ", firstName);

}