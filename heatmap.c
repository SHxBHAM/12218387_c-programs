#include<stdio.h>
int main(){
	printf("press 1 for addition \n");
	printf("press 2 for substraction \n");
	printf("press 3 for division \n");
	printf("press 4 for multiplication \n");
	int choice,a,b;
	printf("enter your choice: ");
	scanf("%d",&choice);
	printf("enter your first value: ");
	scanf("%d",&a);
	printf("enter your second value: ");
	scanf("%d",&b);
	switch(choice){
		case 1:
			printf("result=%d",a+b);
			break;
		case 2:
			printf("result=%d",a-b);
			break;
		case 3:
			printf("result=%d",a/b);
			break;
		case 4:
			printf("result=%d",a*b);
			break;
		default:
			printf("Invalid");
	}
	return 0;
}
