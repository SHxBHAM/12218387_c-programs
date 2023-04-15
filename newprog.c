//#include <stdio.h>
//int main(){
//	int a[100];
//	int hold,i,j,n;
//	printf("\n Enter value of n:");
//	for (i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf()
//    return 0;
//}

// structure are user defined, group of data items it can contain data of diff Data types.
#include <stdio.h>
int main(){
	struct kocck{
		int roll_no;
		int reg_no;
		float cgpa;
	};
	printf("%d",sizeof(kocck));
}
