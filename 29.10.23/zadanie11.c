#include <stdio.h>


int main()
{
    int a,b,c;
    int troj;
    printf("Podaj a: \n");
    scanf("%d",&a);
    printf("Podaj b: \n");
    scanf("%d",&b);
    printf("Podaj c: \n");
    scanf("%d",&c);

    if (a+b>=c && c+b>=a && a+c>=b)
    {
        printf("Mozna utworzyc trojkat. \n");
    }
    else 
    {
        printf("Nie mozna utworzyc trojkota. \n");
    }
    return 1;
}