#include<stdio.h>
struct student {
	char roll[12];
	char name[20];
	int age;
};
int main()
{
	struct student s1;
	scanf("%s%s%d",s1.roll,s1.name,&s1.age);
	printf("Roll\tName\tage\n");
	printf("%s\t%s\t%d",s1.roll,s1.name,s1.age);
}
