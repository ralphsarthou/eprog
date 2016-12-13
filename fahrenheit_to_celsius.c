#include<stdio.h>
#include<math.h>

int main()
{
	double f;
	double d;
	printf("Enter the Degree Farenheit:");
	scanf("%lf",&f);
	d=((f-32.0)*(5.0/9.0));	
	printf ("Degree Celcius is : %lf",d);
}
