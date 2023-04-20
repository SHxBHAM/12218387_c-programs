//we will study fseek and ftell
//rewind used for taking pointer at start
//WAP to implement functions fseek ftell and rewind
#include <stdio.h>
int main(){
	FILE *fp;
	char str[12];
	fp = fopen("test.txt","r");
	fseek(fp,-4,SEEK_END);
	fscanf(fp,"%s",str);
	printf("%s",str);
	printf("\n %ld",ftell(fp));
	fclose(fp);
	return 0;
}
