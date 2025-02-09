#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    printf("\n\n\t\t\t--------------------------------\n");
    printf("\t\t\t|\tHow Can I help you?\t|\n");
    printf("\t\t\t--------------------------------\n\n\n");

    char firstResponse[100];

    scanf("%c", &firstResponse[100]);
    for(int count = 0; count < 100; count++)
    {
        if(firstResponse[count] == "h")
        {
            if(firstResponse[count + 1] == "e")
            {
                if(firstResponse[count + 2] == "l")
                {
                    printf("Hello, How are you doing?");
                }

            }
        }
    }

    


}