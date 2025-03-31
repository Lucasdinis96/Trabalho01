#include <stdio.h>
void situacao(int);

int main (){
    int estado;
    printf("Qual sua situacao civil: \n");
    printf("(1-Solteiro 2-Casado 3-Divorciado 4-Viuvo)\n");
    scanf("%d",&estado);
    situacao(estado);
}

void situacao (int cod){
    int idade, filho;
    char sex, nome[80], cid[10];
    float sal;
    switch (cod){
        case 1:
            fflush(stdin);
            printf("Digite sua idade: ");
            scanf("%d",&idade);
            printf("\nSistuacao - Solteiro");
            printf("\nIdade - %d anos",idade);
        break;
        case 2:
            fflush(stdin);
            printf("Digite seu genero: (M-Masculino F-Feminino) ");
            scanf("%c",&sex);
            printf("Nome do conjuge: ");
            scanf("%79s",nome);
            printf("\nSituacao - Casado");
            printf("\nGenero - %c",sex);
            printf("\nConjuge - %s",nome);
        break;
        case 3:
            fflush(stdin);
            printf("Número de filhos: ");
            scanf("%d",&filho);
            printf("Idade do mais velho: ");
            scanf("%d",&idade);
            printf("\nSituacao - Divorciado");
            printf("\nNumero de filhos: %d",filho);
            printf("\nIdade do filho mais velho: %d",idade);
        break;
        case 4:
            fflush(stdin);
            printf("Cidade atual: ");
            scanf("%9s",cid);
            printf("Salário atual: ");
            scanf("%f",&sal);
            printf("\nSituacao - Viuvo");
            printf("\nCidade atual: %s",cid);
            printf("\nSalario atual: %.2f",sal);

    }
}