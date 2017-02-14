#include <stdio.h>
#include <string.h>
main(){
    FILE *fp;;
	char a[26], ch;
	int numberArray[26];
	fp=fopen("input.txt","r");
	while(!feof(fp)){
		ch=getc(fp);
		printf("%d ",ch);
	}
}
