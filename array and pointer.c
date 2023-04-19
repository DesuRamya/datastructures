#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	printf("%d %d",a,&a[0]);
	//name of array itself acts as a pointer and points to the first element of array
}
