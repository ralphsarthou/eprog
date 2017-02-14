#include <stdio.h>
#include <string.h>
main(){
    FILE *fp;
	char ch;
	fp=fopen("input.txt","r");
	while(!feof(fp)){
		ch=getc(fp);
		printf("%d ",ch);
	}
}
