#include <stdio.h>

int main(){
    // Declaração das variáveis para armazenar os dados
    unsigned long int populacao1, populacao2; // População de cada cidade
    int pontoTuristico1, pontoTuristico2; // Número de pontos turísticos

    char tecla_de_inicio = 'A'; // Tecla de inicialização
    char estado1, estado2; // Letra representando o estado
    char codigoCidade1[5], codigoCidade2[5]; // Código da cidade (Ex: A01, S02)
    char nome_cidade1[50], nome_cidade2[50]; // Nome da cidade

    float areaKm1, areaKm2; // Área em km²
    float pib1, pib2; // PIB da cidade
    float densidadePopulacional1, densidadePopulacional2; //densidade da população 
    float pibCapita1, pibCapita2; //Calcular o PIB per Capita    
    float superPoder1, superPoder2;
    float inversoDensidade1, inversoDensidade2;

    // Introdução ao jogo
    printf("***Seja bem-vindo ao Super Trunfo!***\n"); 
    printf("\nO jogo funcionará da seguinte maneira: você deve me fornecer informações de duas cartas sobre países de sua escolha, e quem tiver as cartas mais fortes, vence. Vamos começar!\n");
    printf("Para iniciar digite 'A':\n");     
    scanf(" %c", &tecla_de_inicio); // Espaço antes de %c evita problemas com buffer de entrada

    printf("\nEssa será as informações da sua carta nº1\n"); // Exibe o número da carta

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
    printf("\nAgora vamos para a carta  nº2\n"); //Começando coleta de dados da segunda carta

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

    //Calculo para descobrir a densidade Populacional da carta 
    densidadePopulacional1 = populacao1 / areaKm1; 
    densidadePopulacional2 = populacao2 / areaKm2; 

    //Calculo para descobrir o PIB per capita carta
    pibCapita1 = pib1 / (float)populacao1; 
    pibCapita2 = pib2 / (float)populacao2; 

    // Cálculo do inverso da densidade populacional
    inversoDensidade1 = 1 / densidadePopulacional1; 
    inversoDensidade2 = 1 / densidadePopulacional2;

    //calculo do super poder
    superPoder1 = populacao1 + areaKm1 + pib1 + pontoTuristico1 + pibCapita1 + inversoDensidade1;
    superPoder2 = populacao2 + areaKm2 + pib2 + pontoTuristico2 + pibCapita2 + inversoDensidade2;

    //Exibindo resultado 
    printf("Comparação das cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", areaKm1 > areaKm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    return 0;
}