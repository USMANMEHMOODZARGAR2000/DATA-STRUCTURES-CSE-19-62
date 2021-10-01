// maximum and minimum number in a linked list
  
#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void max();
void min();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("enter your choice");
		printf("\n press 1 to create the linked list \n 2 for displaying the given list  \n 3 for maximum element in  linked list \n 4 for the minimum element in the Linked list");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:max();
			break;
			case 4:min();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
//create funtion
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
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
 //view 
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
 

 // function for  maximum elm
 void max()
 {
 	int max=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(max<ptr->data)
 		{
 			max=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n maximum element in the linked list is:%d\n",max);
 }
 
  // function for min elm
 void min()
 {
 	int min=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(min>ptr->data)
 		{
 			min=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf(" minimum element in the linked list is:%d",min);
 printf("\n");
 }
