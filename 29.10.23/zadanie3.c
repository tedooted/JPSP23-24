#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Podaj pierwszą liczbe: \n");
    scanf("%d",&a);
    printf("Podaj drugą liczbe: \n");
    scanf("%d",&b);
    
    if (a>b)
    {
        printf("Większa jest: %d",a);
    }
    else
    {
        printf("Większa jest: %d",b);
    }
}