//WAP to demonstrate the fscanf
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int x;
	int roll_no;
	char name[80];
	fp=fopen("student1.txt","r");
	if(fp==NULL)
	{
		printf("\n File could not be opened");
		exit(1);
	}
	x=fscanf(fp,"%s%d",name,&roll_no);
	printf("\n NAME:%s\t  ROLL NUMBER=%d",name,roll_no);
	printf("\n%d",x);// number of values we are reading
	fclose(fp);
	return 0;
}
