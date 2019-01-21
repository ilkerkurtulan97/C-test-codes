#include <stdio.h>
#include <math.h>

int main(void)
{
	int select,a,b;
	
	printf("Enter a and b values ");
	scanf("%d , %d ",&a,&b);
	
	do{
		printf("1) a + b \n");
		printf("2) a - b \n");
		printf("3) a * b \n");
		printf("4) a / b \n");
		printf("5) EXIT \n");
		printf("Selection :     \n");
		scanf("%d",&select);
		
		switch(select)
		{
			case 1 : printf("Result : %d \n", a+b);
			
			case 2 : printf("Result : %d \n", a-b);
			
			case 3 : printf("Result : %d \n", a/(float)b);
			
			case 4 : printf("Result : %f \n", a*b);
			
		}
	
	}while (select != 5);
	return 0;
	
	
	

}

