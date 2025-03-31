#include <stdio.h>

char regiao(char);
void frete(char,int);


int main (){
    char reg; 
    int qtde;
    printf("Digite o codigo da regiao: ");
    printf("1-Norte 2-Nordeste 3-Centro-Oeste 4-Sudeste 5-sul: ");
    scanf("%c",&reg);
    printf("Digite a quantidade de itens comprados: ");
    scanf("%d",&qtde);
    regiao(reg);
    if (qtde>100)
       return printf("\nCompra invalida");
    else
        frete(reg, qtde);
}

char regiao (char cod){
    switch(cod){
    case '1':
        return printf("Regiao - Norte");
        break;
    case '2':
        return printf("Regiao - Nordeste");
        break;
    case '3':
        return printf("Regiao - Centro Oeste");
        break;
    case '4':
        return printf("Regiao - Sudeste");
        break;
    case '5':
        return printf("Regiao - Norte");
        break;
    default:
        return printf("Codigo Invalido");
    }
    return 0;
}

void frete (char cod, int prod){
    int total = prod*5;
    float frete;
    switch(cod){
        case '1':
            frete=total*0.1;
        break;
        case '2':
            frete=total*0.08;
        break;
        case '3':
            frete=total*0.12;
        break;
        case '4':
            frete=total*0.15;
        break;
        case '5':
            frete=total*0.11;
        break;
    }
    printf("\nValor total sem frete = %d",total);
    printf("\nValor do frete - %.2f",frete);
    printf("\nValor total com frete - %.2f",total+frete);
}

