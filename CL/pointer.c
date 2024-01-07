// C program for basics of pointer
#include<stdio.h>
int main()
{
    int a=5;  // int variable declareation
    int *ptr; //pointer variable declaration
    ptr=&a;  // store address of int a to pointer 
    printf("%d\n",a);   // value of a
    printf("%d\n",*ptr);  // value of a using pointer
    printf("%p\n",&a);    // address of a
    printf("%p\n",ptr);  // address of a using pointer
    printf("%p\n",&ptr);  // address of pointer
    return 0;
}