#include<stdio.h>
void modify(int *a)
{
	*a=*a+1;
//printf("%d\n",&a);	
}
int main()
{
	int a=10;
//	printf("%d\n",&a);
	printf("before:%d\n",a);
	modify(&a);
 printf("after:%d\n",a);
}
