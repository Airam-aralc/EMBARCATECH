#include <stdio.h>

int main()
{
    int a, b, pow = 1;

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&a);
     printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&b);

    for (int i = 1; i <= b; i++)
    {
        pow = pow * a;
    }
    
    printf("%d", a);
}
