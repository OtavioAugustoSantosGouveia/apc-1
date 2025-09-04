#include <stdio.h>
int main(){
    char tecla;
    int idade;
    float nota;

    printf("Informa os valores das variaveis:\n");
    scanf("%c", &tecla); // scanf nao sabe tecla = valor;
    getchar(); // ler uma tecla - limpar \n anterior
    scanf("%i", &idade); // precisa do &
    getchar();
    scanf("%f", &nota);

    printf("Os valores informados foram:\n");
    printf("tecla = %c\n", tecla);
    printf("idade = %i\n", idade);
    printf("nota = %f\n", nota);


    return 0;

}