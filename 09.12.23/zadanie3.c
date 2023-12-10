#include <stdio.h>

void zmiana(int *liczba1, int *liczba2)
{
    int zmienna = *liczba1;
    *liczba1 = *liczba2;
    *liczba2 = zmienna;
}
int main()
{
    int x=5;
    int z=10;
    int *liczba1=&x;
    int *liczba2=&z;
    printf("Pierwsza Liczba: %d\n",*liczba1);
    printf("Druga Liczba: %d\n",*liczba2);

    zmiana(liczba1,liczba2);
    printf("*Pierwsza Liczba: %d\n",*liczba1);
    printf("*Druga Liczba: %d\n",*liczba2);

}