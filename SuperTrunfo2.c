#include <stdio.h>

int main(){

    // Declaração das variáveis para armazenar os dados
    int populacao1, populacao2; // População de cada cidade
    int pontoTuristico1, pontoTuristico2; // Número de pontos turísticos
    char tecla_de_inicio = 'A'; // Tecla de inicialização
    char estado1, estado2; // Letra representando o estado
    char codigoCidade1[5], codigoCidade2[5]; // Código da cidade (Ex: A01, S02)
    char nome_cidade1[50], nome_cidade2[50]; // Nome da cidade
    float areaKm1, areaKm2; // Área em km²
    float pib1, pib2; // PIB da cidade
    float densidadePopulacional1, densidadePopulacional2; //densidade da população 
    float pibCapita1, pibCapita2; //Calcular o PIB per Capita
    int carta = 1; // Número fixo para identificar a carta 1
    int Carta = 2; // Número fixo para identificar a carta 2

    // Introdução ao jogo
    printf("***Seja bem-vindo ao Super Trunfo!***\n"); 
    printf("\nO jogo funcionará da seguinte maneira: você deve me fornecer informações de duas cartas sobre países de sua escolha, e quem tiver as cartas mais fortes, vence. Vamos começar!\n");
    printf("Para iniciar digite 'A':\n");     
    scanf(" %c", &tecla_de_inicio); // Espaço antes de %c evita problemas com buffer de entrada

    printf("\nEssa será as informações da sua carta nº %d\n", carta); // Exibe o número da carta

    
    // Dados da carta nº1
    printf("Digite a letra do estado da carta nº1:\n");
    scanf(" %c", &estado1); // Armazena a letra do estado

    printf("Digite o código de sua carta substituindo o 'A' pela letra do seu estado (A01, S01, T01 etc...):\n");
    scanf("%s", codigoCidade1); // Código da cidade (sem o & para strings)

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome_cidade1); // Nome da cidade

    printf("Qual a população?:\n");
    scanf("%d", &populacao1); // População da cidade

    printf("Qual o tamanho da área desse estado (em Km²)?:\n");
    scanf("%f", &areaKm1); // Área em Km²

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &pib1); // PIB da cidade

    printf("E quais são os números de pontos turísticos que possui?:\n");
    scanf("%d", &pontoTuristico1); // Número de pontos turísticos
    

    // Dados da carta nº2
    printf("Agora vamos para a carta  nº %d\n", Carta); //Começando coleta de dados da segunda carta

    printf("Digite a letra do estado da carta nº2:\n");
    scanf(" %c", &estado2); // Armazena a letra do estado

    printf("Digite o código de sua carta substituindo o 'A' pela letra do seu estado (A02, S02, T02 etc...):\n");
    scanf("%s", codigoCidade2); // Código da cidade (sem o & para strings)

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome_cidade2); // Nome da cidade

    printf("Qual a população?:\n");
    scanf("%d", &populacao2); // População da cidade

    printf("Qual o tamanho da área desse estado (em Km²)?:\n");
    scanf("%f", &areaKm2); // Área em Km²

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &pib2); // PIB da cidade

    printf("E quais são os números de pontos turísticos que possui?:\n");
    scanf("%d", &pontoTuristico2); // Número de pontos turísticos

    
    densidadePopulacional1 = populacao1 / areaKm1; //Calculo para descobrir a densidade Populacional da carta N1
    densidadePopulacional2 = populacao2 / areaKm2; //Calculo para descobrir a densidade Populacional da carta N2

    pibCapita1 = pib1 / (float)populacao1; //Calculo para descobrir o PIB per capita carta N1
    pibCapita2 = pib2 / populacao2; //Calculo para descobrir o PIB per capita carta N2

    //Exibindo resultado da carta n1 registrada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCidade1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);

    //Exibindo resultado da carta n2 registrada
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCidade2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

    return 0;
}
