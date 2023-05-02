//binary function
#include<stdio.h>
int binaryse(int *ar,int n,int key)
{
	int l=0,mid,r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(key==ar[mid])
			return mid;
		
		else if(key<ar[mid])
		r=mid-1;
		else 
		l=mid+1;
	}
	return -1;
	
	
}
int main(){
	int n,i,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	int res;
	res=binaryse(a,n,key);
	printf("%d",res);
}


