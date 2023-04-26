//pointer is a special type of variable which points to the adress another variable
//syntax
//data type *pointername
//example int *ptr;
//char *ptr;

//EXAMPLE 1
//#include <stdio.h>
//int main(){
//	int a = 10;
//	int *p;
//	p = &a;
//	printf("%d \n",*p);
//}
//#include<stdio.h>
//int main(){
//	int *i;
//	double *d;
//	float *f;
//	printf("%d \n",sizeof(i));
//	printf("%d \n",sizeof(d));
//	printf("%d \n",sizeof(f));
//	return 0;
//}
//WAP to find area of circle by using pointers 
//#include<stdio.h>
//int main(){
//	double area, radius;
//	double *pradius, *parea;
//	pradius = &radius;
//	parea = &area;
//	printf("please enter the radius of the circle \n");
//	scanf("%lf",pradius);
//	*parea = 3.14*(*pradius)*(*pradius);
//	printf("the value of the area = %lf",*parea);
//	return 0;
//}

//TYPES OF POINTER
//1. NULL POINTER - it is a pointer that doesnt point to any memory location 
//SYNTAX FOR NULL POINTER 
//int *p = NULL OR int *p = 0
//#include<stdio.h>
//int main(){
//	int a = 5;
//	int *p = NULL;
//	printf("%u \n",p);
//	printf("%d \n" *p);
//	p = &a;
//	printf("%u \n",p);
//	printf("%u \n",*p);
//}
//WILD POINTERS
//pointer that hold some junk value or garbage value is called wild pointer (only initialised not assigned pointers)
//VOID POINTER
//it is a pointer that can hold the adress of variable of different datatypes at diff types can also be called generic pointer
//SYNTAX
//void *name_of_pointer
//but before accessing the value through generic pointer by dereferencinng it it must be properly typecasted
//#include<stdio.h>
//int main(){
//	int x = 7;
//	char y = 'A';
//	void *ptr;
//	ptr = &x;
//	printf("value of d is %d \n",*(int*)ptr);
//	ptr = &y;
//	printf("value of y is %c \n "),*(char*)pt);
//	return 0;
//	
//}
//CONSTANT pointer
//it is a pointer that is initialised with an adress and cannot point to anything else 
//SYNTAX
//int*const ptr;
//EXAMPLE
//int value = 22;
//int * const ptr = &value;
//WAP to see the concept of the constant pointer 
//#include<stdio.h>
//int main(){
//	int a = 5;
//	int b = 7;
//	int * const ptr = &a;
//	printf("%d \n",ptr);
//	printf("%d \n",*ptr);
//	ptr=&b; //throws an error bcoz its a constant pointer
//	printf("%d\n",*ptr);
//	return 0;
//	
//}
//DANGLING POINTER
//#include<stdio.h>
//int main()
//{
//    int *ptr;
//    {
//        int val=23;
//        ptr=&val;
//        printf("\n%d",*ptr);// 23 is printed
//        printf("\n%u",ptr);// Address of val is printed
//    }
//    printf("\n%u",ptr);// Same address is printed, even val is destroyed, hence ptr is dangling pointer
//    ptr=NULL;//Solution
//    printf("\n%u",ptr);// Now ptr is not a dangling pointer[0 address value is printed]
//    return 0;
//}
//DYNAMIC MEMORY ALLOCATION
//malloc - it is used to dynamically allocate a memory 
//free - it is used to deallocate a memory
// Deallocating a memory pointed by ptr causes
// dangling pointer
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//    
//	int n=1;
//	int *ptr = (int *)malloc(n*sizeof(int));
//	*ptr=6;    
//    printf("%d",*ptr);//6 is printed
//    printf("\n%d",ptr);//Printing address hold by pointer before deallocation
//    free(ptr); 
//    printf("\n%d",ptr);//Same address will be printed(Dangling pointer)
//   //SOLUTION
//   ptr = NULL;//Pointer is now changed to NULL pointer
//   printf("\n%d",ptr);//0 will be printed
//   return 0;
//}

//pointer to an array
//#include<stdio.h>
//int main(){
//	int a[]={10,20,30,40,50};
//	int *p = a;
//	int i;
//	for(i=0;i<5;i++){
//		printf("%d \n",*(p+i));
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,4,5};
//	int *p=a;
//	// Different notations with pointer to an array for displaying second element
//    // Same terminology can be used to display any element
//    // All will display 2 on screen
//	printf("\n%d",*(p+1));
//	printf("\n%d",*(a+1));
//	printf("\n%d",p[1]);
//	printf("\n%d",1[p]);
//	printf("\n%d",1[a]);
//	return 0;
//}
//POINTER TO ARRAY WITH POINTER ARITHMETIC
#include <stdio.h>
int main(){
	int arr[]= {10,20,30,40,50}
	int i;
	int *p;
	p = arr;
	printf("first value is %d",*p);
	p = p+1;
	printf("\n second value is %d",*p);
	*p = 45;
	p = p+2;
	*p = -2;
	printf(" NEW ARRAY IS \n ");
	for(i=0;i<5;i++){
		printf("%d \n", arr[i]);
		
	}
	
}
 
































































