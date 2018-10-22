#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    int i=0,j,x,a[100];
    while(fgets(str, sizeof(str), stdin)){
        x=atoi(str);
        if(0<x&&x<100){
            a[i]=x;
            i++;
        }
        if(-100<x&&x<0){
            a[i]=-x;
            i++;
        if(x==100)
            printf()
        if(x==-100)
    }

    return 0;
}
