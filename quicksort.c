#include<stdio.h>
void swap(int *a,int i,int j)
{
	int temp;
	 temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
}
int partition(int *a,int l,int h)
{
	int p=h,i=l,j=l,temp;
	while(i<p)
	{
		if(a[i]<a[p])
		{
			swap(a,i,j);
			j++;
			i++;
		}
		else
		i++;
	}
	swap(a,j,p);
	return j;
}
void quick_sort(int *a,int l,int h)
{
	int par;
	if(l<h)
	{
		par=partition(a,l,h);
		quick_sort(a,l,par-1);
		quick_sort(a,par+1,h);
	}
}
int main()
{
	int i,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
