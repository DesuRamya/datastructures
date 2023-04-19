//sending an array into  function is call by reference as we send a i.e.adress of first element of array
#include<stdio.h>
void modify(int *a)//it can also be written as int a[]
{
	a[0]=a[0]+1;
}
int main()
{
	int a[5]={10,20,30,40,50};
	modify(a);// a is adress of first element of array

	int i;
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
}
