#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int array[100],i = 0,j;
    
    while(fgets(str, sizeof(str), stdin)){
        int input = atoi(str);
        
        
        if(input > 0 && i == 0 && input < 100)

        {

            array[0] = input;

            i++;

        }
        else if(input < 0 && i == 0 && input < -100)

        {

            array[0] = -input;

            i++;

        }

        else if(input > 0 && i > 0 && input > 100)

        {

            for(j = i; j > 0; j--)

            {

                array[j] = array[j - 1];

            }

            

            array[0] = input;

            i++;

        }
        
        else if(input < 0 && i > 0 && input > -100)

        {

            for(j = i; j > 0; j--)

            {

                array[j] = array[j - 1];

            }

            

            array[0] = -input;

            i++;

        }


        else if(input == 0)

        {

            for(j = 0; j < i; j++)

            {

                printf("%d",array[j]);

                

                if(j < i - 1)

                {

                    printf(",");

                }

            }

            printf("\n");

        }

        else if(input == 100)

        {

            printf("%d",array[0]);

            

            for(j = 0; j < i - 1; j++)

            {

                array[j] = array[j + 1];

            }

            

            i--;

            printf("\n");

        }
        
         else if(input == -100)

        {

            printf("%d",array[i -1]);
            
            array[i - 1] = 0;
             
            i--;

            printf("\n"); 

        }
    }

    return 0;
}
