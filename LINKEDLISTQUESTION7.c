
   
// delete an instance in a linked list
#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void todelete();

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
		
		printf("\n 1 to  create:- \n 2 to display the elements \n 3 to delete node ");
		printf("\n enter your choice ");
		
		scanf("%i",&c);
		
		switch(c)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:todelete();
			break;
			default :printf("try again!");
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


 
  void todelete()
  {
  	struct nod *ptr,*cpt;
  	int item;
  	printf("enter the elemnt which u want to delete :");
  	scanf("%d",&item);
  	
  	if(head->data==item)      
  	{
  		ptr=head;
  		head=head->next;
  		free(ptr);
    }
	  else 
	  {
	  	ptr=head;             
	  	while(ptr->data!= item)
		  {
		  	cpt=ptr;
		  	ptr=ptr->next;
		  }
		  cpt->next=ptr->next;
		  if(ptr==tail)         
		  {
		  	tail=cpt;
		  }
		  free(ptr);
	  }	
  }
