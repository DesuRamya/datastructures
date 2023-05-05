#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coeff,pow;
	struct Node *next;
};
typedef struct Node node;
node *head=NULL,*tail=NULL,*nn,*temp,*head1=NULL,*tail1=NULL;

node* newnode(int coeff,int pow)
{
  nn=(node *)malloc(sizeof(node));
		nn->coeff=coeff;
		nn->pow=pow;
		nn->next=NULL;
		return nn;	
}

void insert(node *nn)
{
 if(head==NULL && tail==NULL)
	{
		head=nn;
		tail=nn;
	}
	else
	{
		tail->next=nn;
		tail=nn;
	}	
}

void display()
{
 if(head==NULL && tail==NULL)
	{
		printf("NO NODES\n");
	}	
	else
	{
		temp=head;
		while(temp)
		{
			if(temp->next!=NULL)
			printf("%dx^%d+",temp->coeff,temp->pow);
			else
			printf("%dx^%d",temp->coeff,temp->pow);
			temp=temp->next;
		}
	}
}

int main()
{
	int coeff,pow;
	char ch='a';
	while(ch!='N')
	{
		scanf("%d%d",&coeff,&pow);
		nn=newnode(coeff,pow);
		insert(nn);
		printf("Do you want to enter (Y/N):");
		scanf(" %c",&ch);
	}
	display();
}
