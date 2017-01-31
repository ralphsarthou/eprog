#include<stdio.h>
#include<conio.h>
int main(){
	int i,sizeof1,num[5];
	for(i=0; i<5; i++){
		printf("Enter an integers %d: ", i+1);
		scanf("%d", &num[i]);
	}
	for(i=0; i<5; i++){
		if (num[i]==1)
			sizeof1++;
	}
	printf("The number of 1s : %d\n",sizeof1);
	printf("The number of 0s : %d\n",5-sizeof1);
}
