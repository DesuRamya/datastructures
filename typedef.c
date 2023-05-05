//typedef is used to give alias name to a data type 
//alias  name means a new name
#include<stdio.h>
#include<string.h>
typedef struct student {
	char name[20];
	char roll[12];
	int age;
	float cgpa;
}st;
int main(){
	st s1={"Ramya","1",17,9.8};
	printf("%s %s %d %.2f",s1.name,s1.roll,s1.age,s1.cgpa);
}
