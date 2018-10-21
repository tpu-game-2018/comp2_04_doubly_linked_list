#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    char a[100];
    int i=0,j,x;
    while(fgets(str, sizeof(str), stdin)){
        x=atoi(str);
        if(0<x&&x<100)
            a[i]=x;
        if(-100<x&&x<0)
            a[i]=-x;
        if(x==100)
        if(x==-100)
    }

    return 0;
}
