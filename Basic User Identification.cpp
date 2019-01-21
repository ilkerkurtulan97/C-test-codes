#include<stdio.h>
int main()
{
	
	char name[50];
	int birthYear,age;
	printf("What is your name ? \n");
	scanf("%s,&name");
	printf("What is your birth date ? \n");
	scanf("%d,&birthYear");
	age = 2017 - birthYear;
	printf("Dear %s, you are %d years old \n",name,age);
	return 0;
}
