#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

enum AB
{
    A = 1,
    B
};

struct struktura
{
    enum AB C;
    int D;
};

int func(struct struktura element);

int main()
{
    enum AB literalA = A;
    enum AB literalB = B;
    struct struktura StrukturaA = {literalA, 4};
    struct struktura StrukturaB = {literalB, 4};
    int firstValue = func(StrukturaA);
    printf("%d \n", firstValue);
    int secondValue = func(StrukturaB);
    printf("%d \n", func(StrukturaB));
    return 0;
}

int func(struct struktura element)
{
    switch (element.C)
    {
    case A:
        return (element.D / (int)element.C);
        break;
    case B:
        return (element.D / (int)element.C);
        break;
    default:
        return 0;
        printf("Taki enum nie istnieje");
        break;
    }
}
