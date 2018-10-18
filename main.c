#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int array[100];
    int index=0,i;
    
    while(fgets(str, sizeof(str), stdin)){
        int n=atoi(str);
        
        if(1<=n&&n<100){
        array[index]=n;
        index++;
        }
        
        else if(n==100){
            printf("%d\n",array[index-1]);
            index--;
        }
        
        else if(n==-100){
            printf("%d\n",array[0]);
         for(i=0;i<index-1;i++){
             array[i]=array[i+1];
         }
            index--;
        }
        
        else if(n==0){
            for(i=index-1;i>=0;i--){
                printf("%d",array[i]);
                if(i>0){
                    printf(",");
                }
            }
            printf("\n");
        }
    }

    return 0;
 }
