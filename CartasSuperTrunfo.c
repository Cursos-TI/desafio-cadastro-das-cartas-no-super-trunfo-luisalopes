#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //declaração das variáveis de tipo int
    int populacao1;
    int populacao2;
    int numeroPontoTuristico1;
    int numeroPontoTuristico2;
    
    //declaração das variáveis de tipo float
    float area1;
    float area2;
    float pib1;
    float pib2;
    
    //declaração das variáveis de tipo char
    char estado1;
    char estado2;
    
    //declaração das variáveis de tipo string
    char codigoCarta1[6];
    char codigoCarta2[6];
    char cidade1[40];
    char cidade2[40];
    
    //Nesta seção, estou escrevendo uma introdução ao jogo e explicando que vamos registrar as cartas ainda.
    printf("Bem-vindo ao Supertrunfo!\n");
    printf("Para poder jogar, precisamos primeiro registrar as suas cartas.\n");
    printf("Vamos lá?\n");
    
    // Cadastro da Carta 1:
    printf("Digite o nome do Estado da Carta 1:\n");
    scanf("%c", &estado1);

    printf("Agora digite o código da Carta 1:\n");
    scanf("%s", &codigoCarta1); 

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1); 

    printf("Agora digite o número correspondente à população:\n");
    scanf("%d", &populacao1); 

    printf("Digite o número correspondente à área em quilômetros quadrados, usando ponto em vez de vírgula:\n"); 
    scanf("%f", &area1); 

    printf("Agora digite o número correspondente ao PIB, usando ponto em vez de vírgula de novo:\n");
    scanf("%f", &pib1); 

    printf("Só falta agora o número de pontos turísticos. Pode digitar:\n");
    scanf("%d", &numeroPontoTuristico1);

    printf("Vamos conferir os dados que você cadastrou?\n");

    // Exibição dos Dados da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km2\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d \n \n", numeroPontoTuristico1);

    printf("Agora vamos cadastrar a Carta 2!\n \n");
    
    // Cadastro da Carta 2:
    printf("Digite o nome do Estado da Carta 2:\n");
    scanf("%c", &estado2);

    printf("Agora digite o código da Carta 2:\n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Agora digite o número correspondente à população:\n");
    scanf("%d", &populacao2);

    printf("Digite o número correspondente à área em quilômetros quadrados, usando ponto em vez de vírgula:\n");
    scanf("%f", &area2);

    printf("Agora digite o número correspondente ao PIB, usando ponto em vez de vírgula de novo:\n");
    scanf("%f", &pib2);

    printf("Só falta agora o número de pontos turísticos. Pode digitar:\n");
    scanf("%d", &numeroPontoTuristico2);

    printf("Vamos conferir os dados que você cadastrou?\n");

    // Exibição dos Dados da Carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n \n", numeroPontoTuristico2);

    printf("Agora você já pode jogar!\n");

    return 0;
}
