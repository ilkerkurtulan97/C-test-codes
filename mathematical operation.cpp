#include <stdio.h>

int main()
{
	int a=2,b=3,c=4,d=5,e=6;
	printf(" a=%d \t b=%d \t c=%d \td=%d\te=%d\n",a,b,c,d,e);
	a=a+3;
	b=b-4;
	c=c*2;
	d=d/5;
	e=e%3;
	printf("a=a+3 \t b=b-4 \t c=c*2 \t d=d/5 \t e=e%3 \n");
	printf("a=%d \t b=%d \t c=%d \t d=%d \t e=%d \n",a,b,c,d,e);
	return 0;
}
