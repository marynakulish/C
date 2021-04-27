#include <stdio.h>
int main (){
    int a;
    printf("\npodaj liczbe\n");
    scanf("%d", &a);
    if (a>=100 && a%2==0) {
        printf("\nliczba %d jest > 100 i parzysta\n", a);
    }
    else
    printf("\nnie spelnia warunkow\n");
    return 0;
}