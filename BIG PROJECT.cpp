#include <stdio.h>
#include <math.h>

int main(void)
{
	int selection,deg,hum,ray;
	char ans;
	
	start:
		
	printf("Make a selection for your echosystem's information ! ! ! \n \n \n 1)Temperature \n \n \n 2)Humidity \n \n \n 3)Sun exposure \n \n \n 4)Exit \n \n \n");
	scanf("%d",&selection);
	
	switch (selection)
	{
		
		case 1 : printf("Temperature \n");
		printf("What degree is today ? \n");
		scanf("%d",&deg);
		if(deg>35)
		{
			printf("Either water your plants or put them in shade \n");
			
		}
		else{
			printf("Your plants still grow on optimal degree \n");
			
		}
		break;
		
		case 2 : printf("Humidity \n");
		printf("How is the humidity \n");
		scanf("%d",&hum);
		if(hum>95)
		{
			printf("Stop watering them for today \n");
		}
		else{
			printf("They're growing on optimal humidity \n");
			
		}
		break;
		
		case 3 : printf("Sun exposure \n");
		printf("Whats the angle of sun ray's  \n");
		scanf("%d",&ray);
		
		if(ray<40 || ray>50)
		{
			printf("You dont need to worry for your plants today \n");
			
		}
		else
		{
			printf("They need little bit shade , sun is hitting right on to them \n");
			
		}
		
		break;
		
		case 4 : printf("Exit \n");
		
		printf("Dou you want to go back to the main menu ( Y or N ) ? \n");
		
		scanf("%s",&ans);
		
		if(ans=='Y' || ans=='y')
		{
			goto start;
		}
		else if(ans=='N' || ans=='n');
		{
			printf("Thanks for your cooperation ! ! ! \n");	
		}
		break;
	
		
				
			
	}
	return 0;
}
