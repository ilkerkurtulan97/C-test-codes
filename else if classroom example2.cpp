#include <stdio.h>
#include <math.h>

int main (void)
{
	int l,m,f;
	float grade; /*float is usally used for long numbers */
	printf("PLEASE ENTER MIDTERM,LABRATORY,FINAL EXAM GRADES \n");
	scanf("%d,%d,%d",&m,&l,&f);
	
	if(m>45 && f>60)
	{
		grade= l*0.3+m*0.3+f*0.4;
		
	}
	printf("Your average grade is: %f \n",grade);
	if(grade>60)
	{
		printf("Congratulations you re passed");
	}
	else
	{
		printf("You re failed ");
	}
	return 0;
}
