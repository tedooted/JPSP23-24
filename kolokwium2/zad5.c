#include <stdio.h>
#include <math.h>


int wynik = 0;

void dodawanie(int liczba1, int liczba2)
{
    int wynik = liczba1 + liczba2 ;
    printf("Wynikiem dodawania jest %d !\n",wynik);
}
void odejmowanie(int liczba1, int liczba2)
{
    int wynik = liczba1 - liczba2;
    printf("Wynikiem odejmowania jest %d !\n",wynik);
}
void mnozenie(int liczba1, int liczba2)
{
    int wynik = liczba1 * liczba2;
    printf("Wynikiem mnozenia jest %d !\n",wynik);
}
void dzielenie(int liczba1, int liczba2)
{
    if(liczba2!=0)
    {
    int wynik = liczba1 / liczba2;
    printf("Wynikiem dzielenia jest %d !\n",wynik);
    }
    else
    {
        printf("Nie można dzielić przez 0!!\n");
    }
}
int main()
{
    int liczba1, liczba2;
    while(1)
    {
    char dzialanie;
    printf("Podaj znak działania które chcesz przeprowadzić(+,-,*,/): \n");
    scanf("%c",&dzialanie);
    printf("Podaj pierwsza liczbe: \n");
    scanf("%d",&liczba1);
    printf("Podaj druga liczbe: \n");
    scanf("%d",&liczba2);


    switch (dzialanie)
    {
        case '+':
            dodawanie(liczba1,liczba2);
            break;
        case '-':
            odejmowanie(liczba1,liczba2);
            break;
        case '*':
            mnozenie(liczba1,liczba2);
            break;
        case '/':
            dzielenie(liczba1,liczba2);
            break;
        default:
            printf("Nieprawidłowy znak!\n");
            return 1;
    }
    return 0;
}
}