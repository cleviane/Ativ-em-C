#include<stdio.h>
int main()
{
    float base,altura,area;
    printf("Digite o numero da base:\n");
    scanf("%f",&base);
    printf("Digite o numero da altura:\n");
    scanf("%f",&altura);
    area=(base*altura);
    printf("A area da base e da altura do triangulo eh:%.2f\n\n",area);
    system("Pause");
    return 0;
}
