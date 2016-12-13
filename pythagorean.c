#include<stdio.h>
#include<math.h>

main(){
	int a,b,c;
	printf("Enter value for a and b: ");
	scanf("%d%d", &a,&b);
	printf("%d", sqrt((a^2)+(b^2)));
}
