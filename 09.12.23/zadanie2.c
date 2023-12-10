#include <stdio.h>

int main()
{
    int rozmiar = 10;
    int tab[rozmiar];
    printf("Podaj elementy tablicy:\n");
    for (int i =0; i<rozmiar;i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d",&tab[i]);
    }
    printf("Zawartosc tablicy: \n");
    for (int i =0;i < rozmiar;i++)
    {
        printf("%d, ",tab[i]);     
    }
    printf("\n");
return 0;
}