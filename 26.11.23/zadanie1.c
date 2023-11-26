#include <stdio.h>

int silnia(int n);

int silnia(int n)
{  
    int i;
    if (n==1 | n==0)
    {
        return 1;
    }
    else 
    {
        
        return n * silnia(n-1);
    }
}
int main()
{
 printf("Silnia wynosi: %d\n", silnia(6));
}


