#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
typedef node node;
node *start = NULL;


void create(void)
{
	node *temp = NULL;
	temp = (node *)malloc(sizeof(node));
	int val;
	if (temp == NULL)
		printf("memory not allocated\n");

	else
	{
		printf("enter value\n");
		scanf("%d", &val);
		temp->data = val;
		temp->next = NULL;
		temp->prev = NULL;
		start = temp;
	}
}

void add(void)
{
	node *temp, *temp1;
	temp = (node *)malloc(sizeof(node));
	if (start != NULL)
	{
		temp1 = start;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		temp->next = NULL;
		printf("\nenter value\n");
		scanf("%d", &temp->data);
		temp->prev = temp1;
	}
	else
	{
		printf("list doesn't exist\n");
		exit(0);
	}
}

void inbet(void)
{
	node *temp, *temp1;
	temp = (node *)malloc(sizeof(node));
	if (start != NULL)
	{
		temp1 = start;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		temp->next = NULL;
		printf("\nenter value\n");
		scanf("%d", &temp->data);
		temp->prev = temp1;
	}
	else
	{
		printf("list doesn't exist\n");
		exit(0);
	}
}

void del(void)
{
	node *temp = NULL;

	if (start == NULL)
		printf("list is empty/doesn't exist\n");

	else
	{
		temp = start;
		start = start->next;
		printf("deleted node is:%d\n", temp->data);
		free(temp);
	}
}
void delall(void)
{
	node *temp=NULL;
	temp=start;
	while(temp!=NULL)
	{
		free(temp);
		temp=temp->next;
	}
}
void disp(void)
{
	node *temp = NULL;
	temp = start;
	printf("\nstart->");
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	 }
	printf("end\n");
}
void disprev(void)
{
	node *temp = NULL;
	temp = start;
	start->prev=NULL;
	while (temp ->next!= NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("%d->\n",temp->data);
	while (temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->prev;
	}
}
void main()
{
	clrscr();
	int x;
	do
	{
		printf("1)create\t2)insert\t3)remove\t4)display\t5)clear screen\t6)display in reverse\t7)exit\n");
		scanf("%d", &x);

		switch (x)
		{
		case 1:
			create();
			break;

		case 2:
			add();
			break;

		case 3:
			del();
			break;

		case 4:
			disp();
			break;

		case 5:
			clrscr();
			break;
		case 6:
			disprev();
			break;
		case 7:
			exit(0);
		case 8:delall();
			break;

		default:
			printf("default");
			break;
		}
	} while (1);
}
