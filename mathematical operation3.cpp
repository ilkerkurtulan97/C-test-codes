#include <stdio.h>
#include <math.h>

int main(void)
{
	int num;
	printf("Please enter a number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is a even number ",&num);
		
	}
	else
	{
		printf("%d is a odd number");
	}
	return 0;
}
