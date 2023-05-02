#include<stdio.h>
int queue[100],rear=-1,front=-1,size;
void enque_rear(int val)
{
	if (front==0 && rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
	}
	else{
		rear=(rear+1)%size;
		queue[rear]=val;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
	 printf("Queue is Empty\n");
	 return;
	}
	while(i!=rear)
	{
		printf("%d ",queue[i]);
		i=(i+1)%size;
	}
	printf("%d\n",queue[i]);
}
int deque_front()
{
	int val;
	if(front==-1 && rear==-1)
	{
		return-1;
	}
	else if(front==rear)
	{
		val=queue[front];
		front=-1;
		rear=-1;
		return val;
	}
	else
	{
		val=queue[front];
		front=(front+1)%size;
		return val;
	}
}

int main()
{
	int ch,val;
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque at rear\n2.deque at front\n3.display\n4.exit :");		
		scanf("%d",&ch);
		if (ch==1)
		{
			//enque at rear
			scanf("%d",&val);
			enque_rear(val);
		}
		else if (ch==2)
		{
			//deque at front
			int res=deque_front();
			if(res==-1)
			printf("Queue is empty\n");
			else
			printf("%d\n",val);
		}
		else if (ch==3)
		{
			//display
			display();
		}
		else
		{
			break;
		}
	}
}
