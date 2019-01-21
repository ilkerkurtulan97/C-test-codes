#include <stdio.h>
#include <math.h>

int main(void)
{
		
	int age;
	char name[50],gender;
	
		
	printf("Your name : \n");
	scanf("%s",&name);
	printf("Your age : \n");
	scanf("%d",&age);
	printf("Gender (m / f) ");
	scanf("%s",&gender);
	
	if(gender=='f' || gender=='F')
	{
		if(age>30)
	{
		printf("Mrs %s you re getting old \n",&name);
		
	}
	else
	{
		printf("Mrs %s you re still young \n",&name);
	}
	}
	
	else if(gender=='m' || gender=='M')
	{
		 if(age>30)

	{
		printf("Mr %s you re getting old \n",&name);
	}
	else
		printf("Mr %s you re still young \n",&name);
	}
	return 0;
}


