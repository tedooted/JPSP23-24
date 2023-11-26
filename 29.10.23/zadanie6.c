#include <stdio.h>
#include <math.h>

int main()
{
    int rok;
    printf("Podaj rok: \n");
    scanf("%d",&rok);
     if (rok%4==0)
     {
        printf("Rok jest przestępny\n");
     }
     else
     {
        printf("Rok jest nie przestępny\n");
     }
    return 0;
    
}