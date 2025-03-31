#include <stdio.h>

int tipo (int);

int tipo (int num){
    if (num%2==0){
        return printf("Numero par");
    } else {   
        return printf("Numero impar");
    }
    return 0;
}

int main (){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    tipo(num);
    return 0;
}