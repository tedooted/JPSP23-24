#include <stdio.h>

int znajlog(float a, float b)
{
    int c=0;
    float wynik = 1.0;
     while (wynik <= b) {
        c++;
        wynik *= a;
    }
    return c;
}
int main()
{
    float a, b;
    printf("Podaj liczbę A: \n");
    scanf("%f",&a);
    printf("Podaj liczbę b: \n");
    scanf("%f",&b);
    int c = znajlog(a,b);
    printf("Najmniejsza potęga c, dla której %.2f > %.2f, to: %d\n", a, b, c);
}