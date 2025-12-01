#include <stdio.h>
#include <string.h>

int main()
{

    int a = 16;
    int b = 3;

    printf("Addition = %d", a + b);
    printf("\nSoustraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);
    printf("\nDivision = %d", a / b);
    printf("\nModulo = %d", a % b);
    printf("\nComparaison = ");
    if (a == b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    printf("\nSupérieur = ");
    if (a > b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}