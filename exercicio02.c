#include <stdio.h>

int tipo (int);

int tipo (int num){
    if (num>0){
        printf("Numero positivo");
    } else if (num<0) {
        return printf("Numero negativo");
    } else {
        return printf("Zero");
    }
    return 0;
}

int main (){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("%c",tipo(num));
    return 0;
}