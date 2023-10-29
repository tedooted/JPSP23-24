#include <stdio.h>
#include <math.h>

int main()
{
    int rok;
    printf("Podaj rok: \n");
    scanf("%d",&rok);
     if (rok%4==0)
     {
        printf("Rok jest przestępny");
     }
     else
     {
        printf("Rok jest nie przestępny");
     }
    return 0;
    
}