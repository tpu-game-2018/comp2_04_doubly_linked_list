#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int i=0,j,x,a[100];
    while(fgets(str, sizeof(str), stdin)){
        x=atoi(str);
        if(0<x&&x<100){
            a[i]=x;
            i++;
        }
        else if(-100<x&&x<0){
            for(j=i;j>0;j++)
                a[j]=a[j-1]
            a[0]=-x;
            i++;
        else if(x==100){
            printf("%d\n",a[i-1]);
            i--;
        }
        else if(x==-100){
            printf("%d\n",a[0]);
            for(j=0;j<i-1;j++)
                a[j]=a[j+1];
            i--;    
        }
        else if(x==0){
            for(j=i;j>=0;j--){
                printf("%d",a[j]);
                if(j>0)
                    printf(",");
            }
            printf("\n");
        }
    }

    return 0;
}
