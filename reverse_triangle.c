#include <stdio.h>

int main(){
	
	int i,j,num;
	printf("Enter the number of triangle: ");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
} 
