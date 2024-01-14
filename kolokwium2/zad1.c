#include <stdio.h>

int main()
{
    int x;
    printf("Podaj liczbę: \n");
    scanf("%d",&x);
    if(x>=0 && x<=127)
    {
        char ascii = (char)x;
        printf("Liczba ma kod ASCII: %c\n",ascii);
    }
    else
    {
        printf("Twoja liczba nie ma kodu ASCII.\n");
    }
    return 0;
}char *x=wskaznik2;