#include <stdio.h>
#include <math.h>

int main(void)
{
	char name[50];
	char gender,m,f;
	gender=m;
	gender=f;
	
	int sum=0;
	int i,age;
	float avg;
	
	
	for(i=0;i<50;i++)
	{
		printf("Name :  ");
		scanf("%s",&name);
		printf("Age :  ");
	    scanf("%d",&age);
	    printf("Gender ? (m or f)");
	    scanf("%s",&gender);
	    
	    sum = sum + age ;
		
	}
	avg=sum / 50.0;
	printf("Average : %f \n",avg);
	return 0;
	
}
