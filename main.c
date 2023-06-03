#include <stdio.h>
#include <stdlib.h>
int opcaoA, opcaoB, pontosA=0, pontosB=0, i=0;


void resposta(int alternativa, int jogador) {
    while (i < 2){
        if (jogador == 1) {
            printf ("\ndigite aqui sua resposta (A):");
            scanf("%i", &opcaoA);

            if (i == 0 && opcaoA == alternativa) {
                pontosA += 10;
                printf("Acertou! voce tem %i pontos! \n", pontosA);
                break;
            }else if (i == 1 && opcaoA == alternativa) {
                pontosA += 5;
                printf("Acertou! voce tem %i pontos! \n", pontosA);
                break;
            }else if (i == 1 && opcaoA != alternativa) {
                printf("voce errou! \n");
                break;
            }else {
                printf("voce errou! \n");
                i++;
            }

            printf ("\ndigite aqui sua resposta (B):");
            scanf("%i", &opcaoB);

            if (i == 1 && opcaoB == alternativa) {
                pontosB += 7;
                printf("Acertou! voce tem %i pontos! \n", pontosB);
                break;
            }else {
                printf("voce errou! \n");
            }
        }else if (jogador == 2) {
            printf ("\ndigite aqui sua resposta (B):");
            scanf("%i", &opcaoB);

            if (i == 0 && opcaoB == alternativa) {
                pontosB += 10;
                printf("Acertou! voce tem %i pontos! \n", pontosB);
                break;
            }else if (i == 1 && opcaoB == alternativa) {
                pontosB += 5;
                printf("Acertou! voce tem %i pontos! \n", pontosB);
                break;
            }else if (i == 1 && opcaoB != alternativa) {
                printf("voce errou! \n");
                break;
            }else {
                printf("voce errou!");
                i++;
            }

            printf ("\ndigite aqui sua resposta (A):");
            scanf("%i", &opcaoA);

            if (i == 1 && opcaoA == alternativa) {
                pontosA += 7;
                printf("Acertou! voce tem %i pontos! \n", pontosA);
                break;
            }else {
                printf("voce errou!");
            }
        }

    }
}
int main() {

    //3, 2, 4, 5, 2, 1, 5, 3, 2, 1, 1, 4

    //refinamento sucessivo
    printf("\n Pra que serve o refinamento sucessivo?");

    printf("\n 1)Um processo que e realizado por uma maquina");
    printf("\n 2)Um processo que traduz um código para a maquina");
    printf("\n 3)Um processo para simplificar um algoritimo complexo");
    printf("\n 4)Um processo de programação de dados");
    printf("\n 5)Um processo para criar um fluxograma");

    resposta(3, 2);
    i=0;

    //algoritimo
    printf("\n O que é necessário para que um processo possa ser automatizado eficientemente?");

    printf("\n 1) Ser modular");
    printf("\n 2) ser repetível");
    printf("\n 3) Ser recursivo");
    printf("\n 4) Ser homogêneo");
    printf("\n 5) Ser variável");

    resposta(2, 1);
    i=0;

    printf("\n Para que serve o double?");

    printf("\n 1) Para ter mais portabilidade");
    printf("\n 2) Para declarar uma função");
    printf("\n 3) Para evitar o uso da chave");
    printf("\n 4) Para ter um maior controle de numeros após a virgula");
    printf("\n 5) Para protitipar uma funcao");

    resposta(4, 2);
    i=0;

    printf("\n Para que serve o incremento?");

    printf("\n 1) Diminuir um valor por 1");
    printf("\n 2) Acessar um valor na memória");
    printf("\n 3) Dividir um valor por 2");
    printf("\n 4) Adicionar dois valores");
    printf("\n 5) Aumentar um valor por 1");

    resposta(5, 1);
    i=0;

    printf("\n O que é um operador relacional?");

    printf("\n 1) Ele é usado para ligar expressões lógicas");
    printf("\n 2) Ele é usado para comparar expressões");
    printf("\n 3) Ele é usado para modificar o resultado de uma operação relacional");
    printf("\n 4) Ele é usado para desenvolver operações aritiméticas");
    printf("\n 5) Ele é usado para acessar um endereço de memória");

    resposta(2, 2);
    i=0;
    /*
    */

    return 0;
}
