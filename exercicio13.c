#include<stdio.h>
void compra();
void pagamento(float);
float dinheiro (float);
float debito (float);
float credito(float);
int main (){
    int i = 0,start;
    printf("\nIniciar compra: 1-sim 2-Nao ");
    scanf("%d",&start);
    if (start!=2){
        do{
            compra();
            fflush(stdin);
            i+=1;
            printf("\nRealizar outra compra: 1-sim 2-Nao ");
            scanf("%d",&start);
        } while (start!=2);
    }
    printf("\nTotal de compras no dia: %d", i);
}
void compra (){
    float prod, totalCompra;
    int i = 0;
    do {
        printf("Digite o valor do produto (Finalizar compra - '0'): ");
        scanf("%f",&prod);
        totalCompra+=prod;
        i+=1;
    } while (prod>0);
    printf("\nTotal de itens comprados - %d", i-1);
    printf("\nValor total da compra - R$ %.2f\n", totalCompra);
    pagamento(totalCompra);
}
void pagamento (float preco){
    char option;
    fflush(stdin);
    printf("\nMetodo de Pagamento: (1-Dinheiro 2-Debito 3-Credito) ");
    scanf("%c",&option);
    switch (option) {
    case '1':
        dinheiro (preco);
    break;
    case '2':
        debito (preco);
    break;
    case '3':
        credito (preco);
    break;
    }
}
float dinheiro (float valor){
    float desc = 0.1,valorFinal;
    printf("\nMetodo de pagamento - Dinheiro");
    printf("\nDesconto - 10");
    printf("\nValor do desconto - R$ %.2f", valor*desc);
    valorFinal=valor-(valor*desc);
    printf("\nValor final - R$ %.2f", valorFinal);
    return 0;
}
float debito (float valor){
    float desc = 0.05,valorFinal;
    printf("\nMetodo de pagamento - Debito");
    printf("\nDesconto - 5");
    printf("\nValor do desconto - R$ %.2f", valor*desc);
    valorFinal=valor-(valor*desc);
    printf("\nValor final - R$ %.2f", valorFinal);
    return 0;
}
float credito (float valor){
    printf("\nMetodo de pagamento - Credito");
    printf("\nDesconto - Sem desconto");
    printf("\nValor final - R$ %.2f", valor);
    return 0;
}