#include <stdio.h>
#include<stdlib.h>

typedef int data_t;


data_t stack_data[100];
int index;
int n;
int push1(data_t push_data)
{
	if (index < 100) {
		stack_data[index] = push_data;
		index++;
		return 1;
	}
	else {
		return 0;
	}
}

int push2(data_t push_data)
{
	int tmp,i;
	if (index < 100) {
		stack_data[index] = -push_data;

			tmp = stack_data[index];
			for (i = index; i>0; i++) {

				stack_data[index] = stack_data[index - 1];
			}
			stack_data[0] = tmp;
			index++;

		
	}
	else {
		return 0;
	}
}
int pop1(data_t *pop_data)
{

	if (index > 0) {
			index--;
			*pop_data = stack_data[index];
			return 1;
	}
	
	else {
		return 0;
	}
}

int pop2(data_t *pop_data)
{
	int i;

	if (index > 0) {
				*pop_data = stack_data[0];
				for (i = 0; i < index - 1; i++) {
					stack_data[i] = stack_data[i + 1];
				}
				index--;
				return 1;
	}

	else {
		return 0;
	}
}

void stackPrint()
{
	int i;

	for (i = index - 1; i >= 0; i--) {
		printf("%d", stack_data[i]);
		if (i > 0) {
			printf(",");
		}
	}
	printf("\n");
	
}

int main(int argc, char *argv[])
{
	char str[100];
	int p;
	index = 0;
	while (fgets(str, sizeof(str), stdin)) {
		n = atoi(str);

		if (1 <= n && n <= 99) {
			push1(n);
		}

		if (-99 <= n && n<0) {
			push2(n);
		}

		if (n==100) {
			pop1(&p);
			printf("%d", p);
			printf("\n");

		}

		if (n == -100) {
			pop2(&p);
			printf("%d", p);
			printf("\n");
		}

		if (n == 0) {
			stackPrint();
		}


	}

	return 0;
}
