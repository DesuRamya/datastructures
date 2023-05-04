#include<stdio.h>
#include<math.h>
int main()
{
	int x,d,n,r,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
 if(pow(2,i)>n){
	d=n-pow(2,i-1);
	r=2*d+1;
	printf("%d",r);
	break;
	}
	else if(pow(2,i)==n){
		printf("1");
	break;
}
}
}
