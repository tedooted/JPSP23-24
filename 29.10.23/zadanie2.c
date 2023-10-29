#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Podaj pierwszą liczbe: \n");
    scanf("%d",&a);
    printf("Podaj drugą liczbe: \n");
    scanf("%d",&b);
    int dodawanie = a + b;
    int odejmowanie = a - b;
    int mnozenie =  a * b;
    int dzielenie = a / b;
    int modulo = a % b;
    
    printf("Dodawanie: %d\n", dodawanie);
    printf("Odejmowanie: %d\n", odejmowanie);
    printf("Mnożenie: %d\n", mnozenie);
    printf("Dzielenie: %d\n", dzielenie);
    printf("Dzielenie z resztą: %d\n", modulo);
    return 0;
}