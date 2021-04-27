#include <stdio.h>
void wskaznik(int *liczba) {
    *liczba=0;
}

int main(void){
    int liczba;
    printf("\npodaj liczbe:");
    scanf("%d", &liczba);
    printf("\nliczba przed: %d ", liczba);
    wskaznik(&liczba);
    printf("\nliczba po: %d ", liczba);
    return 0;
}

