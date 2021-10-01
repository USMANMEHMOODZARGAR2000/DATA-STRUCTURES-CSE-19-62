
   //student details
#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void prime();

struct nod  
{  
    char name[50];
    int age;
    float marks;  
    struct nod *next;   
};

struct nod*head=NULL,*tail=NULL;

int main()
{
	int c;
	while(1)
	{
		
		printf("\n 1 to create \n 2 to display the student details ");
		printf("\n enter your choice ");
		
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			default :printf(" try again!");
			return 0;
		}
	}
}

void create()
{
	int n,i;
	printf(" enter the number of nodes  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n student %d",i+1);
		struct nod* temp=(struct nod *)malloc(sizeof(struct nod));
		printf("\n enter the name of the student: ");
		scanf("%s",&temp->name);
		printf("\n enter the age of the student: ");
		scanf("%d",&temp->age);
		printf("\n enter the marks of the student: ");
		scanf("%f",&temp->marks);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 
 void view()
 {
 	struct nod*ptr;
 	ptr=head;
 	printf("\nstudent details\n");
 	while(ptr!=NULL)
 	{
 		printf("student name =%s\t",ptr->name);
 		printf("student age =%d\t\t",ptr->age);
 		printf("student marks =%f\n",ptr->marks);
 		ptr=ptr->next;
	}
	printf("\n");
 }
