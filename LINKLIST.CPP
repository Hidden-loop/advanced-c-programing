#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;

void create(void)
{
struct node *temp=NULL;
temp=(struct node*)malloc(sizeof(struct node));
int val;
if (temp==NULL)
	printf("memory not allocated\n");

else
{
	printf("enter value\n");
	scanf("%d",&temp->data);

	temp->next=NULL;
	start=temp;
}
}

void add(void)
{
int val;
struct node *temp,*temp1;
temp=(struct node*)malloc(sizeof(struct node));
if(start != NULL)
{
	temp1=start;
	while(temp1->next != NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
	temp->next=NULL;
	printf("\nenter value\n");
	scanf("%d",&val);
	temp->data=val;
}
else
{	printf("list doesn't exist\n");
	exit(0);
}

}

void del(void)
{
struct node *temp=NULL;

if (start==NULL)
	printf("list is empty/doesn't exist\n");


else
{
	temp=start;
	start=start->next;
	printf("deleted node is:%d\n",temp->data);
	free(temp);
}
}
void delend(void)
{
  struct node *temp1,*temp2;
  temp1=start;
  if (start==NULL)
	printf("list empty");
  else
  {
	while(temp1->next->next!=NULL)
		temp1=temp1->next;
	temp2=temp1->next;
	printf("deleted node is:%d\n",temp2->data);
	free(temp2);
	temp1->next=NULL;
  }
}

void search(void)
{
	struct node *temp;
	temp=start;
	int x;
	int flag=0;
	printf("enter the number to be deleted\n");
	scanf("%d",&x);

	while(temp->data!=x)
	{
		flag++;
		temp=temp->next;
	}
	printf("%d is found at %d\n",temp->data,flag);
}
void delbet(void)
{
	struct node *temp,*temp1;
	temp=start;
	int x;
	printf("enter the number to be deleted\n");
	scanf("%d",&x);
	if(temp->data==x)
	{
		del();
	}
	else{
	while(temp->next->data!=x)
	{
		temp=temp->next;
	}
	temp1=temp;
	temp=temp->next;
	struct node *temp2=temp->next;
	free(temp);
	printf("node eleminated\n");
	temp1->next=temp2;
	}
}
void disp(void)
{
struct node *temp=NULL;
temp =start;
printf("\nstart->");
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;

}
printf("end\n");
}

void main()
{
clrscr();
int x;
do{
printf("1)create\t2)insert\t3)remove\t4)display\t5)clear screen\t6)delend\t7)exit\t8)search\t9)delete in between\n");
scanf("%d",&x);


switch(x){
	case 1:create();
		break;

	case 2:add();
		break;

	case 3:del();
		break;

	case 4:disp();
		break;

	case 5:clrscr();
		break;
	case 6:delend();
		break;
	case 7:exit(0);
	case 8:search();
		break;
	case 9:delbet();
		break;
	default:printf("default");
		break;
}
}while(1);
}

