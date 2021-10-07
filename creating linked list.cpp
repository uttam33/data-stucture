#include<stdio.h>
#include<stdlib.h>
void createnode();
struct node
{
	int data;
	struct node *next;
 };
 typedef struct node node;
 node *head=NULL;
 int main()
 {
 	int n,i;
 	printf("enter the size of node\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 		createnode();
 		
 		return 0;
 }
 void createnode()
 {
 	node *temp;
 	temp=(node*)malloc(sizeof(node));
 	if(temp==NULL)
 	exit(1);
 	printf("enter data elements\n");
 	scanf("%d",temp->data);
 	temp->next=NULL;
 	if(head==NULL)
 	head=temp;
 	else
 	{
 		
 		node *p=head;
 		while(p->next!=0)
 		{
 		p=p->next;
 		
		 }
		 p=NULL ;
		 temp=NULL;
	 }
 	
 }
 
