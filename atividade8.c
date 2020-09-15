#include<stdio.h>
int main ()
{
    int a,b,soma;
    printf("Digite um numero:\n");
    scanf("%d",&a);
    printf("Digite outro numero:\n");
    scanf("%d",&b);
    soma=(a+b);
    printf("O resultado da soma eh:%.1d\n\n",soma);
    system("Pause");
    return 0;
}
