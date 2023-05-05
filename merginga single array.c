#include<stdio.h>
void merge(int *a,int l,int h)
{
	int i,j,k=0,res[h-l+1],m;
	m=(l+h)/2;
	i=l;
	j=m+1;
	while(i<=m && j<=h)
	{
		if(a[i]>a[j])
		{
			res[k]=a[j];
			j++;
			k++;
		}
		else 
		{
			res[k]=a[i];
			i++;
			k++;
		}
	}
	while(j<=h)
		{
			res[k]=a[j];
			j++;
			k++;
		}
			while(i<=m)
		{
			res[k]=a[i];
			i++;
			k++;
		}
		for(k=0,i=l;i<=h;i++,k++)
	   a[i]=res[k];
for(i=0;i<=h;i++)
	{
	printf("%d ",a[i]);
}

}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
}
