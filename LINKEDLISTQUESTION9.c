
   //sort elements in linked list in ascending and descending order

#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void ascending();
void descending();
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
	
		printf("\n 1 to  create  \n 2 to sort the linked list in ascending order\n 3 to sort the linked list in descending order ");
		printf(" enter your choice ");
		
		scanf("%i",&c);
		switch(c)
		{
			case 1:create();
			break;
		    case 2:ascending();
			break;
			case 3:descending();
			break;
			default :printf(" try again!");
			return 0;
		}
	}


}

void create()
{
	int n,i;
	printf(" enter the number of nodes ");
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
  
  
  void ascending()
  {
  	int element;
  	struct nod *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data>cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  
    }
    	 printf("elements after sorting in ascending order\n");
	 view();	  
}
    
    
    
  void descending()
  {
  	int element;
  	struct nod *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data<cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  	  
    }
     printf("elements after sorting in descending order\n");
    view();  
}
