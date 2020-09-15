#include<stdio.h>
int main()
{
    float a,b,media;
    printf("Digite a primeira nota:\n");
    scanf("%f",&a);
    printf("Digite a segunda nota:\n");
    scanf("%f",&b);
    media=(a+b)/2;
    printf("O resultado da media eh:%.2f\n\n",media);
    system("Pause");
    return 0;
}
