#include <stdio.h>
int main(){
    int num1;
    int num2;
    int* ptr1;
    ptr1 = &num1; 
    ptr1 = &num2; 
    *ptr1 = 10;
    int* ptr2 = ptr1;
    printf("\nWskaznik ptr1 = %d\nWskaznik ptr2 = %d", *ptr1, *ptr2);
    return 0;
}
