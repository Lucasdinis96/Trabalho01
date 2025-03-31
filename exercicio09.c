#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome [80];
    char sex;
    int idade;
} dados;

int main (){
    dados insert[100];
    int i,n;

    printf("Digite o numero de cadastros: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("%d",i+1);
        printf("\nDigite o nome: ");
        scanf("%s",insert[i].nome);
        fflush(stdin);
        printf("Digite o genero: ");
        scanf("%c",&insert[i].sex);
        printf("Digite a idade: ");
        scanf("%d",&insert[i].idade);
    }

    printf(" Nome Genero Idade");
    
    for (i=0;i<=20;i++){
        if (insert[i].sex == 'm' && insert[i].idade >=21){
            printf("\n %s %c %d",insert[i].nome,insert[i].sex,insert[i].idade);
        }
    }
    return 0;
}
