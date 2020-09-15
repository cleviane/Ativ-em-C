#include<stdio.h>
int main()
{
    float lado,area;
    printf("Digite o numero do lado:\n");
    scanf("%f",&lado);
    area=(lado*lado);
    printf("A area do lado do quadrado eh:%.2f\n\n",area);
    system("Pause");
    return 0;
}
