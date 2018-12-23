#include <stdio.h>
#include <stdlib.h>

typedef struct t {
	struct node *prev;
	struct node *next;

	int value;
}node;


//���s�R�[�h�̍폜
void trim(char* str)
{
	char *p;
	p = strchr(str, '\n');
	if (p != NULL) {
		*p = '\0';
	}
}


//�V�����m�[�h�����
node *createNode(int val)
{
	node *newNode;
	newNode = (node *)malloc(sizeof(node));
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->value = val;


	return newNode;
}


//target�̉���new��ǉ�����
void addLast(node *target, node *new)
{
	target->next = new;
	new->prev = target;
}
//target�̏��new��ǉ�����
void addTop(node *target, node *new)
{
	target->prev = new;
	new->next = target;
}


//�m�[�h���폜����
void delNode(node *delNode)
{

	node *prev = delNode->prev;	//�����̑O
	node *next = delNode->next;	//�����̎�


	if (prev != NULL) prev->next = delNode->next; //�O�̎��� �����̎��ɂ���
	if (next != NULL) next->prev = delNode->prev; //���̑O�� �����̑O�ɂ���


	printf("%d\n", delNode->value);	//�폜������̂�ꂭ

	free(delNode);	//���
}


//��ԍŏ�������
node *delTop(node *top)
{
	node *rp = top->next;
	delNode(top);

	return rp;
}


//��ԍŌ������
node *delLast(node *last)
{
	node *rp = last->prev;
	delNode(last);

	return rp;
}


//���[�܂ŕ\������
void showNode(node *top)
{
	node *np = top;
	int i = 0;
	while (1)
	{
		if (np == NULL) break;

		if (i == 0)
		{
			printf("%d", np->value);
			i++;
		}
		else
		{
			printf(",%d", np->value);
		}

		if (np->next == NULL) break;
		np = np->next;
	}
	printf("\n");
}




int main(int argc, char *argv[])
{
	node *top = NULL; //�擪�c���p
	node *last = NULL; //�����c���p

	char str[7];

	while (fgets(str, sizeof(str), stdin))
	{
		trim(str);
		int number = atoi(str);


		//�擪�폜
		if (number == 100)
		{
			top = delTop(top);
		}

		//�����폜
		else if (number == -100)
		{
			last = delLast(last);
		}

		//�����X�g��\��
		else if (number == 0)
		{
			showNode(top);
		}

		//�ǉ�
		else
		{
			if (number > 0) //���̐��̂Ƃ��͐擪�ɒǉ�����
			{
				if (top == NULL)
				{
					top = createNode(number);
					last = top;
				}
				else
				{
					node *new = createNode(number);
					addTop(top, new);
					top = new;
				}
			}
			else //���̐��̂Ƃ��͖����ɒǉ�����
			{
				number *= -1;
				if (last == NULL)
				{
					last = createNode(number);
					top = last;
				}
				else
				{
					node *new = createNode(number);
					addLast(last, new);
					last = new;
				}
			}
		}
	}


	return 0;
}
