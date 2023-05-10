#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*nn,*res,*pre,*next,*curntnod;
void display()
{
	if(head==NULL && tail==NULL){
		printf("NO NODES\n");
	}
	else
	{
		temp=head;
		while(temp)
		{
			printf("%d %d %d\n",temp,temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");
	}
}
void insert_at_tail(NODE *nn)
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
NODE *delte_at_tail()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else{
		temp=head;
		while(temp->next->next)
		{
			temp=temp->next;
		}
		res=tail;
		temp->next=NULL;
		tail=temp;
		return res;
	}
}
void insertion_at_head(NODE *nn)
{
    if(head==NULL && tail==NULL)
	{
		head=nn;
		tail=nn;
	}
	else
	{
		nn->next=head;
		head=nn;
	}
}
NODE* deletion_at_head()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		temp=head;
		temp=temp->next;
		res=head;
		head->next=NULL;
		head=temp;
		return res;
	}
}
NODE * reverse()
{
	if(head==NULL && tail==NULL)
	{
		printf("NO NODES\n");
	}
	else if(head==tail)
	{
		printf("NO NEED TO REVERSE\n");
		display();
    }
	else{
			pre=NULL;
	        next=NULL;
	        curntnod=head;
	        tail=head;
		while(curntnod)
		{
			next=curntnod->next;
			curntnod->next=pre;
			pre=curntnod;
			curntnod=next;
		}
		head=pre;
	}
}
void insert_by_position(NODE *nn,int pos)
{
	int q,f=0;
	if(head==NULL && tail==NULL)
	{
		printf("NOT POSSIBLE TO DISPLAY\n");
	}
    else{
   	temp=head;
	for(q=1;q<pos-1;q++)
	{
		if(temp==NULL)
		{
			printf("NOT POSSIBLE\n");
			f=1;
			break;
		}
		else{
		temp=temp->next;
	}
	}
	if(f==0)
	{
	nn->next=temp->next;
	temp->next=nn;
    }
  }
}
NODE *delte_by_pos(int pos)
{
	int q,f=0;
    if(head==NULL && tail==NULL)
	{
		return NULL;
	}
   	temp=head;
	for(q=1;q<pos-1;q++)
	{
		if(temp==NULL)
		{
			return NULL;
		}
		else{
		temp=temp->next;
	     }
    }
	res=temp->next;
	temp->next=temp->next->next;
	res->next=NULL;
	return res;
}
int main()
{
	int ch,val,pos;
	while(1)
	{
		printf("1.insert_at_tail\n 2.delte_at_tail\n 3.display\n 4.insertion_at_head\n 5.deletion_at_head\n 6.reverse\n 7.head\n 8.tail\n 9.insert_by_position\n 10.delte_by_pos\n 11.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
			scanf("%d",&val);
			nn=(NODE *)malloc(sizeof (NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_tail(nn);
		}
		else if(ch==2)
		{
			//delete
			res=delte_at_tail();
			if(res==NULL)
			{
				printf("NO NODE\n");
			}
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else if(ch==4)
		{
			//insertion at head
			scanf("%d",&val);
			nn=(NODE *)malloc(sizeof (NODE));
			nn->data=val;
			nn->next=NULL;
			insertion_at_head(nn);
		}
		else if(ch==5)
		{
			//deletion at head
			res=deletion_at_head();
			if(res==NULL)
			{
				printf("NO NODE\n");
			}
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else if(ch==6)
		{
			reverse();
		}
		else if(ch==7)
		{
			printf("%d\n",head->data);
		}
		else if(ch==8)
		{
			printf("%d\n",tail->data);
		}
		else if(ch==9)
		{
			scanf("%d",&val);
			scanf("%d",&pos);
			nn=(NODE *)malloc(sizeof (NODE));
			nn->data=val;
			nn->next=NULL;
			insert_by_position(nn,pos);
		}
		else if(ch==10)
		{
			scanf("%d",&pos);
			res=delte_by_pos(pos);
			if(res==NULL)
			{
				printf("NO NODE\n");
			}
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else
		{
			//exit
		   break;
		}
	}
}
