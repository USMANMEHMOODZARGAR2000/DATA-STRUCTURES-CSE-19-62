
   //insert a node in a linked list
#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void insertany();
void insertbeg();


struct nod   
{  
    int data;  
    struct nod *next;   
};

struct nod*head=NULL,*tail=NULL;

int main()
{
	int c;
	while(1)
	{

		printf("\n 1 to  create \n 2 to view \n 3 to insert at  beginning \n 4 to insert at any position  ");
		printf("\n enter your choice ");
		
		scanf("%i",&c);
		
		switch(c)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insertbeg();
			break;
		    case 4:insertany();
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
		struct nod* temp=(struct nod *)malloc(sizeof(struct nod));
		printf("enter your data ");
		scanf("%d",&temp->data);
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
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }

 
 void insertany()
 {
 	int target;
 	struct nod *ptr,*cpt;
 	ptr=(struct nod *)malloc(sizeof(struct nod));
 	printf("enter the element to be inserted");
	scanf("%d",&ptr->data);
	printf("enter the node after which you want to insert ");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	cpt->next=ptr;
 }

 
 void insertbeg()
 {
 	struct nod *ptr;
	ptr=(struct nod *)malloc(sizeof(struct nod));
	printf("\n enter the element to inserted");
	scanf("%d",&ptr->data);
	ptr->next=head;
	head=ptr;
 }
