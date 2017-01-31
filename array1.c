#include <stdio.h>
int main(){
	int i, grades[3],sum=0;
	float ave=0;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	for(i=0; i<3; i++){
		sum+=grades[i];
	}
	ave=sum/3;
	printf("%f\n",ave);
	if (ave>=75)
		printf("Pass");
	else
		printf("Fail");
}
