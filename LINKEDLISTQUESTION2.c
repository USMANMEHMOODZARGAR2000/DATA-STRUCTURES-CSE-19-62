  //display odd numbers in a linked list
   
#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n,i;
		printf("Enter the number of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(i=0;i<n;i++)
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d :",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				if(head==NULL)
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
			temp->next=NULL;
			
	}
	
void view(struct Node *p)	
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

void Oddnum(struct Node *p)
	{
		printf("\n ODD numbers IN THE GIVEN LIST  are :\n");
		while(p!=NULL)
			{
				if(p->data%2!=0)
					{
						printf("%d ",p->data);
					}
					p=p->next;
			}
	}

int main()
	{
		create();
		view(head);
	Oddnum(head);
	}
