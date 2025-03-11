#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variavéis
    char estado_carta1, estado_carta2;
    char codigo_carta1[5],codigo_carta2[5];
    char nome_Cidade_carta1[20], nome_Cidade_carta2[20];
    int populacao_carta1, ponto_Turistico_carta1,populacao_carta2, ponto_Turistico_carta2;
    float area_carta1, area_carta2;
    double pib_carata1, pib_carta2;

   
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados pelo ususario para carta 1
     printf("CARTA 1\n");

     printf("Digite uma letra maiuscula para representar o estado: \n");
     scanf("%c", &estado_carta1);
 
     printf("Digite o código da cartar, a letra do estado seguida de um número 01 a 99 \n");
     scanf("%s", codigo_carta1);
 
     printf("Digite o nome da cidade: \n");
     scanf("%s", nome_Cidade_carta1);
 
     printf("Digite o número de habitantes da cidade; \n");
     scanf("%d", &populacao_carta1);
 
     printf("Digite a área da cidade em Km: \n");
     scanf("%d", &area_carta1);
 
     printf("Digite o Produto Interno Bruto(PIB) da cidade: \n");
     scanf("%lf", pib_carata1);
 
     printf("Digite quantos pontos turisticos existem na cidade: \n");
     scanf("%d", &ponto_Turistico_carta1);
 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
