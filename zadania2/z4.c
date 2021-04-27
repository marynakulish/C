#include <stdio.h>

int cf(int);
int main(){
printf("Podaj liczbe: ");
int n;
scanf("%d", &n);
printf("\nCiąg Fibonacciego dla %d liczb:\n", n);
for (int i = 1; i <= n; i++){
    printf("%d\n", cf(i));
}
}
int cf(int n){
    int c;
    if (n == 1 || n == 2)
    c=1;
    if (n > 2)
    c=cf(n-2)+cf(n-1);
    return c;
}



