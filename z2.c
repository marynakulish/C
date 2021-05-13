#include <stdio.h>

typedef enum {
    false,
    true
} bool;
int checkbit (int liczba, int bit) {
    if ((liczba & (1 << bit)) == 0) {
        printf("false");
        return false;
        
    }
    else {
        printf("true");
        return true;
        
    }
};  

void main () {
    checkbit (149, 7);
}
