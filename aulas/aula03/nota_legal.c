#include <stdio.h>
int main(){
    char produto[30];
    int quantidade;
    float preco;

    printf("Informe o nome do produto: ");
    scanf("%s", produto); // %s não precisa de &
    getchar();

    printf("Informe a quantidade do produto: ");
    scanf("%i", &quantidade);
    getchar();

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    printf("\nGerando a nota legal....\n");

    printf("=========================\n");
    printf("   N O T A   L E G A L\n");
    printf("=========================\n");
    printf("Item        Qtd Preco\n");
    printf("%-11s %03i %5.2f\n", produto, quantidade, preco);
    printf("=========================\n");

    return 0;

}