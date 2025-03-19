#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    printf("Desafio Super Trunfo - NOVATO\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Atributos das cidades
    unsigned long int populacao1;
    float area1;
    float pib1;
    int npt1;
    char nome1[50];
    char codCarta1[50];
    char estado1[50];
    float DensidadePop1;
    float PIBperCap1;

    float SuperPoder1;



    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;
    char nome2[50];
    char codCarta2[50];
    char estado2[50];
    float DensidadePop2;
    float PIBperCap2;

    float SuperPoder2;

   

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira a letra do estado da carta 1: \n");
        scanf("%s", &estado1);
    
    
    printf("Digite o codigo da cidade: \n");
        scanf("%s", &codCarta1);

    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome1);

    printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
        scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da cidade: \n");
        scanf("%d", &npt1);


    DensidadePop1 = (float) populacao1 / area1;
    PIBperCap1 = (float) (pib1 / populacao1) * 1000000000;

    SuperPoder1 = (float) area1 + pib1 + npt1 + PIBperCap1 + (1/DensidadePop1);
    



    printf("Insira a letra do estado da carta 2: \n");
        scanf("%s", &estado2);
       
    printf("Digite o codigo da cidade: \n");
        scanf("%s", &codCarta2);

    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome2);

    printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
        scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da cidade: \n");
        scanf("%d", &npt2);

    DensidadePop2 = (float) populacao2 / area2;
    PIBperCap2 = (float) (pib2 / populacao2) * 1000000000;

    SuperPoder2 = (float) area2 + pib2 + npt2 + PIBperCap2 + (1/DensidadePop2);





    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codCarta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("Area da cidade: %.3f km2\n", area1);
    printf("PIB da cidade: %.3f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos da cidade: %d\n", npt1);
    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop1);
    printf("PIB per Capita: %.2f reais \n", PIBperCap1);

    printf("----------------------------------------------------\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codCarta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area da cidade: %.3f km2\n", area2);
    printf("PIB da cidade: %.3f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos da cidade: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop2);
    printf("PIB per Capita: %.2f reais \n", PIBperCap2);

    printf("----------------------------------------------------\n");

    printf("Comparacao de cartas\n");

    //Comparacao de todos os atributos

    printf("Comparacao de Populacao: \n");
    printf("Carta 1: %s. Populacao: %d \n", nome1, populacao1);
    printf("Carta 2: %s. Populacao: %d \n", nome2, populacao2);
    
    if(populacao1 > populacao2){
        printf("Carta 1 venceu! \n");
    }else{
        printf("Carta 2 venceu! \n");
    }



    printf("Comparacao de area: \n");
    printf("Carta 1: %s. Area: %f \n", nome1, area1);
    printf("Carta 2: %s. Area: %f \n", nome2, area2);

    if(area1 > area2){
        printf("Carta 1 venceu! \n");
    }else {
        printf("Carta 2 venceu! \n");
    }
    


    printf("Comparação de PIB: \n");
    printf("Carta 1: %s. PIB: %f \n", nome1, pib1);
    printf("Carta 1: %s. PIB: %f \n", nome2, pib2);

    if(pib1 > pib2){
        printf("Carta 1 venceu! \n");
    }else {
        printf("Carta 2 venceu! \n");
    }



    printf("Comparacao de Numero de Pontos Turisticos: \n");
    printf("Carta 1: %s. NPT: %d \n", nome1, npt1);
    printf("Carta 1: %s. NPT: %d \n", nome2, npt2);
    
    if(npt1 > npt2){
        printf("Carta 1 venceu! \n");
    }else {
        printf("Carta 2 venceu! \n");
    }



    printf("Comaparacao de Densidade Populacional: \n");
    printf("Carta 1: %s. Densidade populacional: %f \n", nome1, DensidadePop1);
    printf("Carta 2: %s. Densidade populacional: %f \n", nome2, DensidadePop2);

    if(DensidadePop1 < DensidadePop2){
        printf("Carta 1 venceu! \n");
    }else {
        printf("Carta 2 venceu \n");
    }



    printf("Comaparacao de Pib per capita: \n");
    printf("Carta 1: %s. Pib per capita: %f \n", nome1, PIBperCap1);
    printf("Carta 2: %s. Pib per capita: %f \n", nome2, PIBperCap2);   
    
    if(PIBperCap1 > PIBperCap2){
        printf("Carta 1 venceu! \n");
    }else {
        printf("Carta 2 venceu! \n");
    }



    printf("Comparacao de SuperPoder: \n");
    printf("Carta 1: %s. SuperPoder: %f \n", nome1, SuperPoder1);
    printf("Carta 2: %s. SuperPoder: %f \n", nome2, SuperPoder2);

    if(SuperPoder1 > SuperPoder2){
        printf("Carta 1 venceu! \n");

    }else {
        printf("Carta 2 venceu! \n");
    }
    
    
    
    
    
    
   
    


    return 0;
}
