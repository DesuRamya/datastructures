#include<stdio.h>
void bubble_sort(int *a,int n)
{
	int i,j,temp,sc;
 for(i=0;i<n;i++)
 {
 	sc=0;
 	for(j=0;j<n-i-1;j++)
	{
	if(a[j]>a[j+1])
	{
		temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	sc++;
}
	if (sc==0)
	break;
}
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
