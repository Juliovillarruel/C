#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int age;

    printf("How old are you?\n\n");
    scanf("%d", &age);
    if (age < 30)
    {
        printf("You are really young\n\n");
    }
    else if (age > 30)
    {
        printf("You are considerably older\n\n");
    }

}