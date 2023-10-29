#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Podaj pierwszą liczbe: \n");
    scanf("%d",&a);
    printf("Podaj drugą liczbe: \n");
    scanf("%d",&b);
    printf("Podaj trzecia liczbe: \n");
    scanf("%d",&c);
    
    if (a>b)
    {
        printf("Większa jest: %d\n",a);
    }
    else
    {
        if (b>c)
        {
            printf("Większa jest: %d\n",b);
        }
        else
        {
            printf("Większa jest: %d\n",c);
        }
        
    }
    return 0;
}