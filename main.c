#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int n[100];
    int i = 0;
    int j;
    
    while(fgets(str, sizeof(str), stdin)){
        int in = out(str);
         
         
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
             
             n[0] = -input;
            n[i] = -input;
             i++;
        }
        
        return 0;
    }
