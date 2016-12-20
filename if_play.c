#include <stdio.h>
int main (){
	int grade;
	
	printf("Number: ");
	scanf("%d",&grade);
	if(grade%3 ==0 ){
		printf ("Pogi");
	}if(grade%5 ==0){
		printf ("Ed");
	}if((grade%3 ==0 && grade%5 ==0)){
		printf("Ed Pogi ");
	}
	
}
