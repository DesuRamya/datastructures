#include<stdio.h>
struct student {
	char roll[12];
	char name[20];
	int age;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	scanf("%s%s%d",s[i].roll,s[i].name,&s[i].age);
	printf("Roll\tName\tAge\n");
	for(i=0;i<n;i++)
	printf("%s\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
}
