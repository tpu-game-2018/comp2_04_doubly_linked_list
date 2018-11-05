#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[100];
	char array[100];
	int i = 0;
	int j ;

	while (fgets(str, sizeof(str), stdin)) {
  		int n = atoi(str);
		if(n > 0 && i == 0 && n < 100)
        	{
            		array[0] = n;
            		i++;
        	}
        		else if(n < 0 && i == 0 && n > -100)
        	{
            		array[0] = -n;
            		i++;
        	}
        	else if(n > 0 && i > 0 && n < 100)
        	{
            		for(j = i; j > 0; j--)
            		{
                		array[j] = array[j - 1];
            		}
            		array[0] = n;
            		i++;
        	}
        	else if(n < 0 && i > 0 && n > -100)
        	{
            		array[i] = -n;
            		i++;
        	}
        	else if(n == 0)
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
        	else if(n == 100)
        	{
            		printf("%d",array[0]);
            		for(j = 0; j < i - 1; j++)
            		{
                		array[j] = array[j + 1];
			}
			i--;
			printf("\n");	
		}
         	else if(n == -100)
        	{
            		printf("%d",array[i -1]);
            		array[i - 1] = 0;
            		i--;
			printf("\n"); 
  		}
    	}
    return 0;
}
/*0: 現在のリストに格納されている全てのデータを「,」で区切って表示する
100: リストの先頭のデータを削除する。削除する際に、データの値を出力する
-100: リストの最後のデータを削除する。削除する際に、データの値を出力する
それ以外の正の値: リストの先頭にデータを追加する
それ以外の負の値: リストの先頭にデータの符号を反転して追加する*/
