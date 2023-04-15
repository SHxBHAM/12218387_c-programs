#include <stdio.h>
int main(){
	int age;
	printf("age?:");
	scanf("%d",&age);
//-----------------------if else----------------------------------------
//	scanf("%d",&age);
//	if (age >= 18){
//		printf("eligible");
//	}
//	else{
//		printf("not eligible");
//	}
//-----------------------turnery----------------------------------------------
    age>=18?printf("eligible"):printf("not eligible");
	return 0;
}
