#include<stdio.h>
int main()
{
    int idade;
    char nome[40];
    printf("Digite o seu nome:\n");
    gets(nome);
    printf("Digite a sua idade:\n");
    scanf("%d",&idade);
    printf("nome:%s\n idade:%d\n",nome,idade);
    system("Pause");
    return 0;
}
