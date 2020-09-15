#include<stdio.h>
#define peso1 1
#define peso2 2
#define peso3 3
#define peso4 4
int main()
{
     float nota1,nota2,nota3,nota4,media;
     printf("Digite a primeira nota:\n");
     scanf("%f",&nota1);
     printf("Digite a segunda nota:\n");
     scanf("%f",&nota2);
     printf("Digite a terceira nota:\n");
     scanf("%f",&nota3);
     printf("Digite a quarta nota:\n");
     scanf("%f",&nota4);
     media=((nota1*peso1)+(nota2*peso2)+(nota3*peso3)+(nota4*peso4))/(1+2+3+4);
     printf("O resultado da media ponderada eh:%.2f\n\n",media);
     system("Pause");
     return 0;
}
        
