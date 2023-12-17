#include <stdio.h>

int main()
{
    int n;
    printf("Podaj liczbę podzielną przez liczby z zakresy 2-6: \n");
    scanf("%d",&n);
    if(n%2==0 && n%3==0 && n%4==0 && n%5==0 && n%6==0)
    {
        printf("%d liczba jest podzielna przez liczby z zakresu 2-6!\n",n);
    }
    else
    {
        printf("%d liczba nie jest podzielna przez liczby z zakresu 2-6!\n",n);
    }
    return 0;
}