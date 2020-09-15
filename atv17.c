#include<stdio.h>
int main ()
{
    int numerador,denominador;
    float decimal;
    printf("Digite o numerador:\n");
    scanf("%d",&numerador);
    printf("Digite o denominador:\n");
    scanf("%d",&denominador);
    decimal=(numerador/denominador);
    printf("O resultado decimal eh:%.2f\n\n",decimal);
    system("Pause");
    return 0;
}
