#include<stdio.h>
#include<math.h>

main(){
	int a,b,c,d;
	printf("Enter grade 1: ");
	scanf("%d", &a);
	printf("Enter grade 2: ");
	scanf("%d", &b);
	printf("Enter grade 3: ");
	scanf("%d", &c);
	d=(a+b+c)/3;
	printf("The Average is: %d",d);
}
