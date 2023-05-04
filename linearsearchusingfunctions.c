#include<stdio.h>
int search(int *a,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		return i;
	}
		
		return -1;
	
}
int main()
{
	int a[100],linear,key,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	linear=search(a,n,key);
	printf("%d",linear);
}
