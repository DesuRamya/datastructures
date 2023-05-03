#include<stdio.h>
#include<stdlib.h>
struct NODE {
	int data;
	struct NODE *next;
};
typedef struct NODE node;
node *nn,*head=NULL,*tail=NULL,*temp,*res,*val;


void insert_tail(node *nn)
{
	if (head==NULL && tail==NULL)
	{
		head=nn;
		tail=nn;
		head->next=nn;
	}
	else
	{
		nn->next=head;
		tail->next=nn;
		tail=nn;
	}
}


void insert_head(node *nn)
{
	if(head==NULL && tail==NULL)
	{
		head=nn;
		tail=nn;
		nn->next=head;
	}
	else
	{
		nn->next=head;
		head=nn;
		tail->next=nn;
	}
}


void insert_pos(node *nn,int pos)
{
  	int q=1;
			temp=head;
			while(q<pos-1)
			{
				if(temp->next==head)
				{
					printf("Insertion impossible\n");
					return;
				}
				temp=temp->next;
				q++;
		 }
		nn->next=temp->next;
		temp->next=nn;
}

void display()
{
	if (head==NULL && tail==NULL)
 {
 	printf("NO NODES\n");
	}
	else 
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}

node  *delete_head()
{
 if (head==NULL && tail==NULL)	
  return NULL;
 else if(head==tail)
 {
 	val=head;
 	head=NULL;
 	tail=NULL;
 	return val;
	}
	else
	{
		temp=head;
		val=temp;
		head=temp->next;
		tail->next=head;
		temp->next=NULL;
		return val;
	}
}

node *delete_tail()
{
	if (head==NULL && tail==NULL)	
  return NULL;
 else if(head==tail)
 {
 	val=head;
 	head=NULL;
 	tail=NULL;
 	return val;
	}
	else
	{
		temp=head;
		while(temp->next->next!=head)
 {
			temp=temp->next;
	}
		val=tail;
		temp->next=head;
		tail=temp;
		val->next=NULL;
		return val;
 }
}


node *delete_pos(int pos)
{
	int q=1;
 temp=head;
	 while(q<pos-1)
		{
	 	if(temp->next->next==head)
   {	
		   printf("deletion is impossible\n");
		   return NULL;
		 }
		 temp=temp->next;
		 q++;
		}
		val=temp->next;
		temp->next=val->next;
		val->next=NULL;
		return val;
}



node *insert(int val)
{
			nn=(node *)malloc(sizeof(node));
			nn->data=val;
			nn->next=NULL;
			return nn;
}


void delet(node *res)
{
	if(res==NULL)
	printf("NO NODES\n");
	else
	{
		printf("%d\n",res->data);
		free(res);
	}
}



int main(){
	int ch,val,pos;
	while(1)
	{
		printf("1.Insert_tail 2.Insert_head 3.Insert_positon 4.Display 5.Delete_head 6.Delete_tail 7.Delete_pos 8.Exit :  ");
		scanf("%d",&ch);
		if (ch==1)
		{
			scanf("%d",&val);
			nn=insert(val);
			insert_tail(nn);
		}
	else	if (ch==2)
		{
			scanf("%d",&val);
		nn=insert(val);
			insert_head(nn);
		}
		else if (ch==3)
		{
			scanf("%d",&val);
			scanf("%d",&pos);
			nn=insert(val);
			insert_pos(nn,pos);
		}
		else if(ch==4)
		{
			display();
		}
		else if(ch==5)
		{
			res=delete_head();
			delet(res);
		}
		else if(ch==6)
		{
			res=delete_tail();
			delet(res);
		}
		else if(ch==7)
		{
			scanf("%d",&pos);
			res=delete_pos(pos);
			delet(res);
		}
		else
		{
			break;
		}
	}
}

