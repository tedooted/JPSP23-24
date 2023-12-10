#include <stdio.h>

int zmiennaGlobalna = 10;

int main()
{
    int zmiennaLokalna;
    zmiennaLokalna = zmiennaGlobalna;
    int *liczba1=&zmiennaGlobalna;
    int *liczba2=&zmiennaLokalna;
    printf("Zmienna Lokalna to: %p\n",liczba1);
    printf("Zmienna Globalna to: %p\n",liczba2);
}
