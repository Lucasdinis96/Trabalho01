#include <stdio.h>


char tipo(char letra){
    char vogal[]={'a','e','i','o','u'};
    for (int i = 0; i<5;i++){
        if (letra == vogal[i])
            return printf("E uma vogal");
        else
           return printf("E uma consoante");
    }
}

char tipo (char);

int main (){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    tipo(letra);
}
