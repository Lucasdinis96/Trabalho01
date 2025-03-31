#include <stdio.h>

int main (){
    int num[10];
    int soma = 0;
    int media = 0;
   for (int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
        soma += num[i];
        media = soma/10;
    }
    for (int i = 0; i < 10; i++){
        printf("\nMetade do elemento = %d",num[i]/2);
    }
    printf("\nSoma do vetor = %d",soma);
    printf("\nMedia do vetor = %d",media);
    
}