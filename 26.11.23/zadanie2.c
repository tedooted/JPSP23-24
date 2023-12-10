#include <stdio.h>

int NWD(int x, int y);

int main()
{
    int x = 22;
    int y = 75;

    printf("Pierwsza Liczba: %d\n Druga liczba: %d\n NWD: %d\n", x,y,NWD(x,y));
    return 0;
}

int NWD(int x, int y)
{
   if (x>=y)
   {
    return x;
   }
   else
   {
    return y;
   }
}

