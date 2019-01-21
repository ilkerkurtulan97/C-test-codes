#include <stdio.h>
#include <math.h>

int main(void)
{
	int number1,number2;
	
	printf("Enter number");
	scanf("%d",&number1);
	
	
	printf("Enter second number");
	scanf("%d",&number2);
	
	if(number1==number2)
	{
		printf("These numbers are equal");
		
	}
	else if(number1>number2)
	{
		printf("First number is greater than the second one");
		
	}
	else
	{
		printf("Second number is greater than the first one");
		
	}
	return 0;
	
	
	
}
