#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    printf("\t\t\t------------------------------------\n");
    printf("\t\t\t|    Hello, how can I help you?    |\n");
    printf("\t\t\t------------------------------------\n");


    char firstResponse[100] = "jjjjjjuuuuuulllllhelloiiiiiiiiiooooooooooo";

   /*

    for (int a = 0; a < 100; a++)
    {
        if (firstResponse[0] == 'h')
        {
            if (firstResponse[1] == 'e')
            {
                if (firstResponse[2] == 'l')
                {
                    if (firstResponse[3] == 'l')
                    {
                        if (firstResponse[4] == 'o')
                        {
                            printf("The first word was detected as hello\n\n");
                            break;
                        }
                    }
                }
            }
        }
    }
    */


    for (int a = 0; a < 100; a++)
    {
        if (firstResponse[a] == 'h')
        {
            if (firstResponse[a + 1] == 'e')
            {
                if (firstResponse[a + 2] == 'l')
                {
                    if (firstResponse[a + 3] == 'l')
                   {    
                        //int a = 0;
                        if (firstResponse[a + 4] == 'o')
                        {
                            printf("We detected a hello in the entire subset\n\n");
                            break;
                        }
                   }
                }
            }
        }    

    }


}