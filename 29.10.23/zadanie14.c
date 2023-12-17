#include <stdio.h>
#include <math.h>

int main()
{
    double k;
    double rad;
    printf("Podaj kąt w stopniach: \n");
    scanf("%lf",&k);
    if(k>0 && k<360)
    {
        rad=k*(M_PI/180);
        printf("Kąt %.2f stopni to w radianach: %.6f\n",k,rad);
    }
    else
    {
        printf("Nie prawidłowy kąt: \n");
    }
}