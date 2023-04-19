#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr=a;
	for(;ptr <= a+4;ptr++)
	printf("%d ",*ptr);
}
