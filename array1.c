#include <stdio.h>
int main(){
	int i, grades[3],ave;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
		ave+=grades[i]/3;
	}
	if (ave>=75)
		printf("Pass");
	else
		printf("Fail");
}
