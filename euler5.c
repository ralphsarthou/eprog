#include <stdio.h>

int main(){
	int i=0;
	
	while (1){
		i++;
		if(i%1==0 && i%2==0 && i%3==0 &&i%4==0 && i%5==0 && i%6==0 && i%7==0 &&i%8==0 && i%9==0 && i%10==0 ){
			printf("%d\n",i);
			i=2520;
			break;	
		}
	}
}
