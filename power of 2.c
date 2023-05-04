#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=pow(2,31-__builtin_clz(n));
	int d=n-x;
	int j=2*d+1;
	printf("Josephus position is %d",j);
}
