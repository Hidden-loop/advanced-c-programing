#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct hash{
	char name[20];
	int hsh;
	struct hash *next;
};
typedef struct hash hash;
hash *start=NULL;

void add(void)
{
hash *temp=NULL;
temp=start;
if(start==NULL){
	printf("enter value");
	scanf("%d",&temp);
	temp->next=NULL;
	start=temp;
	}
else{
	while(temp!=NULL){
	temp=temp->next;
	}
	printf("naam batao\n");
	scanf("%s",&temp->name);
	temp->next=NULL;
}
}

void hashing(void){
	hash *temp=start;
	while(temp!=NULL)
	{
		temp=temp->next;
	}
	int h=strlen(temp->name);
		h=(h/2+10)*3+(h%2);
/*while(lol!=NULL)
{
if(lol.name=='i')
	h=h+12;
lol=lol->next;
}*/

temp->hsh=h;
printf("%d is the HASH CODE",temp->hsh);
}

void disp(void)
{
	while(temp!=NULL)
	{
		printf("%d",temp->hsh);
		temp=temp->next;
	}
}

void main(void){
clrscr();
int c=0;
do{
	printf("1 to hash\n 2 to display");
	scanf("%d",&c);
switch(c){
	case 1:add();
			break;
	case 2:disp();
			break;
	case 3:hashing();
			break;
	case 4:exit(0);
	}
	getch();
	}while(1);
}


