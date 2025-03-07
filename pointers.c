#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x; //ptr is a pointer variable which stores memory address of x
    
    printf("value of x: %d \n", x); //printing directly
    printf("value of x: %d \n", *ptr); //printing using the pointer(dereferencing)

    printf("address of x: %p \n", &x);
    printf("address of x: %p \n", ptr); //since ptr stores &x

    printf("address of ptr: %p \n", &ptr); //address of pointer variable

    return 0;
}
    
