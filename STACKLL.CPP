//stack using LL
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};
struct node *start;

typedef struct node node;

void create(void){
 node * temp;
 temp=start;
 temp=(node*)malloc(sizeof(node*));

 if(temp==NULL)
	printf("Memory could not be allocated\n");

 else{
	printf("enter a number\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	start=temp;
	printf("list created\n");
	}
}

void push(void){
 node*temp,*temp1;
 temp=start;
 temp1=(node*)malloc(sizeof(node));

 if(temp1==NULL)
	printf("Memory could not be allocated\n");

 else{
	while(temp->next!=NULL)
		temp=temp->next;

	printf("enter number\n");
	scanf("%d",&temp1->data);
	temp->next=temp1;
	temp1->next=NULL;
	printf("node inserted\n");
 }
}

void pop(void){
 node*temp;
 temp=start;

	while(temp->next->next!=NULL)
		temp=temp->next;


	temp->next=NULL;
	printf("node deleted\n");
}

void disp(void){
 node * temp;
 temp = start;

 printf("start ->");

 while(temp!=NULL){
	printf("%d ->",temp->data);
	temp=temp->next;
 }
 printf("top\n");
}

void main(){
	int c;
	clrscr();

	lol:
	printf("enter 1 to create\n 2 to insert\n 3 to delete\n 4 to display\n 5 to clearscreen\n 6 to exit\n");
	scanf("%d",&c);
	switch(c){
		case 1:create();
				break;

		case 2:push();
				break;

		case 3:pop();
				break;

		case 4:disp();
				break;

		case 5:clrscr();
				break;

		case 6:
				exit(0);

		default:
				exit(0);
	}

getch();
goto lol;
}

