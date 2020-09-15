#include<stdio.h>
#define PI 3.1415
int main()
{
    float raio,area;
    printf("Digite o numero do raio:\n");
    scanf("%f",&raio);
    area=(PI*raio*raio);
    printf("O resultado da area do circulo eh:%.2f\n\n",area);
    system("Pause");
    return 0;
}
