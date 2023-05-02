//binary recursion
#include<stdio.h>
int binaryse(int *ar,int l,int r,int key)
{

     int mid;
    mid=(l+r)/2;
	if(l>r)
	return -1;
   
		if(key==ar[mid])
			return mid;
		
		else if(key<ar[mid])
		r=mid-1;
		else 
		l=mid+1;
		return binaryse(ar,l,r,key);
	}
int main(){
	int n,i,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	int res;
	res=binaryse(a,0,n-1,key);
	printf("%d",res);
}


