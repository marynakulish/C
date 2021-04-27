#include <stdio.h>
int main () {
    int a;
    printf("\npodaj liczbe\n");
    scanf("%d", &a);
   for(int i=0; i<=a-1; i++) {
       for(int j=1; j<=a-i-1; j++) 
       printf(" ");
       for(int k=0; k<=i; k++)
       printf("*");
       printf("\n");
        }
    return 0;
    }