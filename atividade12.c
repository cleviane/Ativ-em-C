#include<stdio.h>
int main()
{
    float base,altura,area;
    printf("Digite a base do retangulo:\n");
    scanf("%f",&base);
    printf("Didite a altura do retangulo:\n");
    scanf("%f",&altura);
    area=(base*altura);
    printf("O resultado da area do retangulo eh:%.2f\n\n",area);
    system("Pause");
    return 0;
}
