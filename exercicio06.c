#include <stdio.h>

void multi (){
    for (int num = 0; num <=500; num++){
        if (num%5==0){
            printf("\n %d",num);
        }
    }
}
void multi();
int main (){
    multi();
} 