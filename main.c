#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int n[100];
    int i = 0;
    int j;
    
    while(fgets(str, sizeof(str), stdin)){
        int in = atoi(str);
         
         
         if(in > 0 && i == 0 && in < 100)
 
         {
 
             n[0] = in;
 
             i++;
 
         }
         else if(in < 0 && i == 0 && in > -100)
 
         {
 
             n[0] = -in;
 
             i++;
 
         }
 
         else if(in > 0 && i > 0 && in < 100)
 
         {
 
             for(j = i; j > 0; j--)
 
             {
 
                 n[j] = n[j - 1];
 
             }
 
             
 
             n[0] = in;
 
             i++;
 
         }
         
        else if(in < 0 && i > 0 && in > -100)
         {
             for(j = i; j > 0; j--)
             {
                 n[j] = n[j - 1];
             }
             
             n[0] = -in;
            n[i] = -in;
             i++;
        }
        
    else if(in == 0)
 
         {
 
             for(j = 0; j < i; j++)
 
             {
 
                 printf("%d",n[j]);
 
                 
 
                 if(j < i - 1)
 
                 {
 
                     printf(",");
 
                 }
 
             }
 
             printf("\n");
 
         }
 
         else if(in == 100)
 
         {
 
             printf("%d",n[0]);
 
             
 
             for(j = 0; j < i - 1; j++)
 
             {
 
                 n[j] = n[j + 1];
 
             }
 
             
 
             i--;
 
             printf("\n");
 
         }
         
          else if(in == -100)
 
         {
 
             printf("%d",n[i -1]);
             
             n[i - 1] = 0;
              
             i--;
 
             printf("\n"); 
 
         }
     }
 
     return 0;
 }
