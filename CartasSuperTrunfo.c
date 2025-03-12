#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração de variavéis
    char estado_carta1, estado_carta2;
    char codigo_carta1[5],codigo_carta2[4];
    char nome_Cidade_carta1[20], nome_Cidade_carta2[20];
    unsigned long int populacao_carta1, populacao_carta2;
    int ponto_Turistico_carta1,ponto_Turistico_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    float pib_percapito_carta1,pib_percapito_carta2;
    float densidade_populacional_carta1,densidade_populacional_carta2;
    float super_poder_carta1, super_poder_carta2;
     
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados pelo usuário para carta 1
     printf("CARTA 1\n");

     printf("Digite uma letra maiúscula para representar o estado: \n");
     scanf("%c", &estado_carta1);
 
     printf("Digite o código da carta, a letra do estado seguida de um número 01 a 99 \n");
     scanf("%s", codigo_carta1);
 
     printf("Digite o nome da cidade sem espaço: \n");
     scanf("%s" , nome_Cidade_carta1);
 
     printf("Digite o número de habitantes da cidade; \n");
     scanf("%lu", &populacao_carta1);
 
     printf("Digite a área da cidade em Km²: \n");
     scanf("%f", &area_carta1);
 
     printf("Digite o Produto Interno Bruto(PIB) da cidade: \n");
     scanf("%f", &pib_carta1);
 
     printf("Digite quantos pontos turisticos existem na cidade: \n");
     scanf("%d", &ponto_Turistico_carta1);
     printf("------------------------------------------------------------------\n\n");

     //Calculando a densidade populacional da carta 1
     densidade_populacional_carta1 = populacao_carta1 / area_carta1;

     //Calculando a pib per capito da carta 1
     pib_percapito_carta1 = pib_carta1 / populacao_carta1;

     //Calculando super poder da carta 1
     super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + (float)ponto_Turistico_carta1 + pib_carta1 + pib_percapito_carta1 + (1/densidade_populacional_carta1);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados pelo ususario para carta 2

    printf("CARTA 2\n");

    printf("Digite uma letra maiúscula para representar o estado: \n");
    scanf(" %c", &estado_carta2);

    printf("Digite o código da cartar, a letra do estado seguida de um número 01 a 99 \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade sem espaço: \n");
    scanf("%s" , nome_Cidade_carta2);

    printf("Digite o número de habitantes da cidade; \n");
    scanf("%lu", &populacao_carta2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area_carta2);

    printf("Digite o Produto Interno Bruto(PIB) da cidade: \n");
    scanf("%f", &pib_carta2);

    printf("Digite quantos pontos turisticos existem na cidade: \n");
    scanf("%d", &ponto_Turistico_carta2);
    printf("------------------------------------------------------------------\n\n");

    //Calculando a densidade populacional da carta 2
    densidade_populacional_carta2 = populacao_carta2 / area_carta2;

     //Calculando a pib per capito da carta 2
     pib_percapito_carta2 = pib_carta2 / populacao_carta2;

     //Calculando super poder da carta 2
     super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + (float)ponto_Turistico_carta2 + pib_carta2 + pib_percapito_carta2 + (1/densidade_populacional_carta2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\tCARTA 1\n");

    printf("Estado: %c \n", estado_carta1 );
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da cidade: %s \n", nome_Cidade_carta1);
    printf("População: %lu habitantes\n",populacao_carta1);
    printf("Área: %.2f km²\n",area_carta1);
    printf("PIB: %.2f bilhões de reais\n",pib_carta1);
    printf("Densidade Populacional: %.2f \n", densidade_populacional_carta1);
    printf("PIB per Capita %.2f \n", pib_percapito_carta1);
    printf("Número de Pontos Turísticos: %d \n", ponto_Turistico_carta1);
    printf("Super Poder: %.2f \n", super_poder_carta1);
    
    

    printf("---------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------------------------\n");

    printf("\tCARTA 2\n");

    printf("Estado: %c \n", estado_carta2 );
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", nome_Cidade_carta2);
    printf("População: %lu habitantes\n",populacao_carta2);
    printf("Área: %.2f km²\n",area_carta2);
    printf("PIB: %.2f bilhões de reais\n",pib_carta2);
    printf("Densidade Populacional: %.2f \n", densidade_populacional_carta2);
    printf("PIB per Capita %.2f \n", pib_percapito_carta2);
    printf("Número de Pontos Turísticos: %d \n", ponto_Turistico_carta2);
    printf("Super Poder: %.2f \n", super_poder_carta2);


    printf("---------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------------------------\n");

    //Comparando as cartas
    //Este trcho de codigo eu fiz sem ajuda!
    /*printf("Popolação: %d \n", populacao_carta1 > populacao_carta2 );
    printf("Área:  %d \n",area_carta1 > area_carta2);
    printf("PIB:  %d \n", pib_carta1 > pib_carta2);
    printf("Densidade Populacional: %d \n", densidade_populacional_carta1 < densidade_populacional_carta2);
    printf("PIB per capita: %d \n", pib_percapito_carta1 > pib_percapito_carta2);
    printf("Ponto Turistico: %d \n", ponto_Turistico_carta1 > ponto_Turistico_carta2);
    printf("Super poder: %d \n", super_poder_carta1 > super_poder_carta2);*/

    //Este trecho eu quis deixar mais eladorado e pesquisei para deixa-lo melhor.
    printf("População: Carta %d é a vencedora (%d)\n", (populacao_carta1 > populacao_carta2) ? 1 : 2, populacao_carta1 > populacao_carta2);
    printf("Área: Carta %d é a vencedora (%d)\n", (area_carta1 > area_carta2) ? 1 : 2, area_carta1 > area_carta2);
    printf("PIB: Carta %d é a vencedora (%d)\n", (pib_carta1 > pib_carta2) ? 1 : 2, pib_carta1 > pib_carta2);
    printf("Densidade Populacional: Carta %d é a vencedora (%d)\n", (densidade_populacional_carta1 < densidade_populacional_carta2) ? 1 : 2, densidade_populacional_carta1 < densidade_populacional_carta2);
    printf("PIB per capita: Carta %d é a vencedora (%d)\n", (pib_percapito_carta1 > pib_percapito_carta2) ? 1 : 2, pib_percapito_carta1 > pib_percapito_carta2);
    printf("Ponto Turístico: Carta %d é a vencedora (%d)\n", (ponto_Turistico_carta1 > ponto_Turistico_carta2) ? 1 : 2, ponto_Turistico_carta1 > ponto_Turistico_carta2);
    printf("Super poder: Carta %d é a vencedora (%d)\n", (super_poder_carta1 > super_poder_carta2) ? 1 : 2, super_poder_carta1 > super_poder_carta2);

 
    printf("---------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------------------------\n");

    return 0;
}
