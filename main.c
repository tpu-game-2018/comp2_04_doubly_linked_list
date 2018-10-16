#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[7];
	char array[100];
	int index = 0;
	int j = 0;

	while (fgets(str, sizeof(str), stdin)) {

		printf("%s", str);
		int n = atoi(str);
		if (n == 0)
		{
			for (int i = j; i > 0; i--)
			{
				printf("%d\n", array[i]);
				if(i > 1)
				{
					printf(",");
				}
			}
		}
		else if (n == 100)
		{
			for(int i = 1;i==j;i++)
			{
				array[i] = array[i+1];
			}
			j--;
		}
		else if (n == -100)
		{
			array[j] = 0;
				j--;
		}
		else if (n < 0)
		{
			array[j++] = n;
			j++;
		}
		else if (n > 0)
		{
			n *= -1;
			array[j++] = n;
			j++;
		}
	}

	return 0;
}
/*0: 現在のリストに格納されている全てのデータを「,」で区切って表示する
100: リストの先頭のデータを削除する。削除する際に、データの値を出力する
-100: リストの最後のデータを削除する。削除する際に、データの値を出力する
それ以外の正の値: リストの先頭にデータを追加する
それ以外の負の値: リストの先頭にデータの符号を反転して追加する*/
