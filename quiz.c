#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int opcaoA, opcaoB, pontosA=0, pontosB=0, i=0, jogador1, jogador2;


int resposta(int alternativa, int jogador) {
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
                printf("voce errou! \n");
                i++;
            }

            printf ("\ndigite aqui sua resposta (A):");
            scanf("%i", &opcaoA);

            if (i == 1 && opcaoA == alternativa) {
                pontosA += 7;
                printf("Acertou! voce tem %i pontos! \n", pontosA);
                break;
            }else {
                printf("voce errou! \n");
            }
        }else {
            printf("Erro na funcao das perguntas");
            return 0;
        }
    }
    i = 0;
}

int bonus(int jogador) {
    printf("\n Qual das opções a seguir pode ser utilizada para verificar se um número é par em C?");

    printf("\n 1) num %2==1");
    printf("\n 2) num %2==0");
    printf("\n 3) num %2!=0");
    printf("\n 4) num %2!=1");
    printf("\n 5) num /2==1");

    printf("Digite aqui sua resposta: \n");
    if (jogador == 1) {
        scanf("%i", &opcaoA);
        if (opcaoA == 2) {
            printf("Acertou! voce ganhou 50 pontos! \n");
            pontosA += 50;
            printf("Agora voce tem %i pontos \n", pontosA);
        }
    }else if (jogador == 2) {
        scanf("%i", &opcaoB);
        if (opcaoB == 2) {
            printf("Acertou! voce ganhou 50 pontos! \n");
            pontosB += 50;
            printf("Agora voce tem %i pontos \n", pontosB);
        }        
    }else {
        printf("Erro na pergunta bonus");
        return 0;
    }
}

int main() {
    srand(time(0));
    int inicial = rand();

    printf("%i\n", inicial);

    if ((inicial % 2) == 0) {
        jogador1 = 1;
        jogador2 = 2;
    }else if ((inicial % 2) != 0) {
        jogador1 = 2;
        jogador2 = 1;
    }else {
        printf("Erro ao escolher jogador inicial");
        return 0;
    }

    //3, 2, 4, 5, 2, 5, 4, 1, 1, 2, 1, 1, 4, 3, Bonus: 2

    //refinamento sucessivo
    printf("\n Pra que serve o refinamento sucessivo?");

    printf("\n 1)Um processo que e realizado por uma maquina");
    printf("\n 2)Um processo que traduz um código para a maquina");
    printf("\n 3)Um processo para simplificar um algoritimo complexo");
    printf("\n 4)Um processo de programação de dados");
    printf("\n 5)Um processo para criar um fluxograma");

    resposta(3, jogador1);

    //algoritimo
    printf("\n O que é necessário para que um processo possa ser automatizado eficientemente?");

    printf("\n 1) Ser modular");
    printf("\n 2) ser repetível");
    printf("\n 3) Ser recursivo");
    printf("\n 4) Ser homogêneo");
    printf("\n 5) Ser variável");

    resposta(2, jogador2);

    printf("\n Para que serve o double?");

    printf("\n 1) Para ter mais portabilidade");
    printf("\n 2) Para declarar uma função");
    printf("\n 3) Para evitar o uso da chave");
    printf("\n 4) Para ter um maior controle de numeros após a virgula");
    printf("\n 5) Para protitipar uma funcao");

    resposta(4, jogador1);

    printf("\n Para que serve o incremento?");

    printf("\n 1) Diminuir um valor por 1");
    printf("\n 2) Acessar um valor na memória");
    printf("\n 3) Dividir um valor por 2");
    printf("\n 4) Adicionar dois valores");
    printf("\n 5) Aumentar um valor por 1");

    resposta(5, jogador2);

    printf("\n O que é um operador relacional?");

    printf("\n 1) Ele é usado para ligar expressões lógicas");
    printf("\n 2) Ele é usado para comparar expressões");
    printf("\n 3) Ele é usado para modificar o resultado de uma operação relacional");
    printf("\n 4) Ele é usado para desenvolver operações aritiméticas");
    printf("\n 5) Ele é usado para acessar um endereço de memória");

    resposta(2, jogador1);

    printf("\nO que e um vetor ?");

    printf ("\n1) Aponta um local na memoria");
    printf ("\n2) Printar na tela");
    printf ("\n3) Receber input");
    printf ("\n4) Laco de repeticao");
    printf ("\n5) Uma lista"); //correta

    resposta(5, jogador2);

    printf("\nComo acessar o elemento na linha i e coluna j de uma matriz chamada matriz em C ?");
    
    printf ("\n1) matriz[i,j]");
    printf ("\n2) matriz[i],[j]"); 
    printf ("\n3) matriz(i)(j)");
    printf ("\n4) matriz[i][j]"); //correta
    printf ("\n5) matriz[i)(j]");

    resposta(4, jogador1);

    printf("\nQual é o valor mais comum para a parte incremento em um loop for ?");
    
    printf ("\n1) i++"); //correta
    printf ("\n2) i+1");
    printf ("\n3) i+=1");
    printf ("\n4) i = i + 1");
    printf ("\n5) 1+i");
    
    resosta(1, jogador2);

    printf("\nQual é a estrutura básica de um loop for em C?");
    
    printf ("\n1) for (inicializacao; condicao; incremento) { codigo }"); //correta
    printf ("\n2) for {inicializacao; condicao; incremento} codigo");
    printf ("\n3) for (condicao; inicializacao; incremento) { codigo }");
    printf ("\n4) for (condicao) { codigo; inicializacao; incremento }");
    printf ("\n5) for (inicializacao, condicao, incremento) {codigo} ");

    resposta(1, jogador1);

    printf("\nQual é a diferença fundamental entre um loop while e um loop for em C?");
    
    printf ("\n1) O loop while permite controlar o número de iterações, enquanto o loop for não.");
    printf ("\n2) O loop for não verifica a condição antes de cada iteração, enquanto o loop while verifica."); //correta
    printf ("\n3) O loop for é mais eficiente em termos de desempenho do que o loop while.");
    printf ("\n4) O loop while não permite utilizar um contador, enquanto o loop for permite.");
    printf ("\n5) O loop while inicia a execução pelo bloco de código, enquanto o loop for inicia pela condição.");

    resposta(2, jogador2);

    printf("\nQual é a estrutura básica de um loop do-while em C?");
    
    printf ("\n1) do { código } while (condição)"); //correta
    printf ("\n2) do { código } until (condição)");
    printf ("\n3) do (condição) { código }.");
    printf ("\n4) do while (condição) { código }");
    printf ("\n5) do [condição] { código } while");

    resposta(1, jogador1);

    printf("\nComo acessar o elemento na posição i de um vetor chamado vetor em C?");
    
    printf ("\n1) vetor[i]"); //correta
    printf ("\n2) vetor(i)");
    printf ("\n3) vetor{i}");
    printf ("\n4) i[vetor]");
    printf ("\n5) (vetor)i");

    resposta(1, jogador2);

    printf("\nQual é a sintaxe correta para declarar uma matriz de inteiros em C?");
    
    printf ("\n1) int matriz[ ]"); //correta
    printf ("\n2) matriz int [ ]");
    printf ("\n3) int[ ] matriz");
    printf ("\n4) int matriz[ ] [ ]");
    printf ("\n5) int matriz[ ] [ ] [ ]");

    resposta(4, jogador1);

    printf("\n Como acessar o valor armazenado na terceira linha e segunda coluna de uma matriz chamada matriz em C?");
    
    printf ("\n1) matriz[2][1]");
    printf ("\n2) matriz[1][2]");
    printf ("\n3) matriz[3][2]");
    printf ("\n4) matriz[2][3]");
    printf ("\n5) matriz[3][1]");

    resposta(4, jogador1);

    if ((3*pontosA) <= pontosB) {
        bonus(1);
    }else if ((3*pontosB) <= pontosA) {
        bonus(2);
    }else {
        printf("Erro ao inicializar a pergunta bonus");
        return 0;
    }

    if (pontosA == pontosB) {
        printf("Empate! os dois tem %i pontos!", pontosB);
    }else if (pontosA > pontosB) {
        printf("Jogador A ganhou! ele tem %i pontos, enquanto o jogador B tem %i!", pontosA, pontosB);
    }else if (pontosB > pontosA) {
        printf("Jogador B ganhou! ele tem %i pontos, enquanto o jogador A tem %i!", pontosB, pontosA);
    }else {
        printf("Erro ao finalizar jogo");
        return 0;
    }

    return 0;
}