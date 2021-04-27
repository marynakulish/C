#include <stdio.h>
int main(){
    int tab[5];
    printf("\npodaj liczby:\n");
    for (int i=0; i<5; i++) {
        scanf("%d", &tab[i]);
    }
    printf("\npodane liczby: ");
    for (int i=0; i<5; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
