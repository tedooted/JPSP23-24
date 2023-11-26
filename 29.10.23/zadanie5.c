#include <stdio.h>
#include <math.h>

int main()
{
    char znak;
    int kod;
   
    printf("Podaj znak lub kod ASCII: \n");
    scanf("%d", &kod);

    if((kod >=65 && kod <= 90) || (kod >=97 && kod <= 122))
    {
        printf("Podany znak/kod ASCII to litera alfabetu.\n");
    } 
    else 
    {
        printf("Podany znak/kod ASCII nie jest literą alfabetu.\n");
    }
    return 0;
}