#include <stdio.h>

void maior (int num){
    int maior=0,i=1,atual=0;

    while (i<=num){
        printf("Digite um numero: ");
        scanf("%d", &atual);
        
        if (atual > maior){
            maior = atual;
        }
        i=i+1;
    }
    printf("O maior numero e: %d",maior);
}

void maior (int);

int main (){
    int num;
    printf("Digite a quantidade de numeros fornecida: ");
    scanf("%d", &num);
    maior(num);

}