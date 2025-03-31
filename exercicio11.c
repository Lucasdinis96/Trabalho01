#include <stdio.h>

int main(){
    float popA=90000,popB=50000,cresA=0.009,cresB=0.015;
    float taxaA = 0, taxaB = 0, somaA = 0, somaB = 0;
    int i = 0;

    taxaA=popA*cresA;
    taxaB=popB*cresB;

    do {
        printf("%d",i);
        somaA+=popA+taxaA;
        somaB+=popB+taxaB;
        i+=1;
    } while (somaB<somaA);

    printf("%.2f",somaA);
    printf("\n%.2f",somaB);
    printf("\n%d",i);

}