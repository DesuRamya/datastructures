#include<stdio.h>
void selection(int *arr,int n){
	int i,p,max,maxin,temp;
	for(p=0;p<n-1;p++)
	{    
	max=arr[0];
	maxin=0;
		for(i=0;i<n-p;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
				maxin=i;
			}
		}
	temp=arr[maxin];
	arr[maxin]=arr[i-1];
	arr[i-1]=temp;
	}
	
	
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);// function call
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
