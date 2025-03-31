#include <stdio.h>

int main () {
    int num;
    float con;
    printf("Digite um intervalo para conversao: (em polegadas) ");
    scanf ("%d",&num);

    for (int i = 1; i<=num; i++ ){
        con = i*2.54;
        printf("\n%d polegadas = %.2f centimetros",i,con);
    }
}