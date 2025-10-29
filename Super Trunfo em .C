#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[12]; 
char codigo1[5];
char cidade1[50];
int população1;
float area1;
float pib1;
int pontoTuristico1;



  // Área para entrada de dados
 
  printf("Digite o Estado de A-H:\n");
  scanf(" %s", estado1);

  printf("Digite o Código da Carta:\n");
  scanf(" %s", codigo1);

  printf("Digite o Nome da Cidade:\n");
  scanf(" %[^\n]", cidade1); // Lê a palavra com espaços como EX: "São Paulo"

  printf("Digite a População da Cidade:\n");
  scanf("%d", &população1);

  printf("Digite Àrea da Cidade:\n");
  scanf(" %f", &area1);

  printf("Digite O Pib da Cidade:\n");
  scanf(" %f", &pib1);
  printf("Digite Quantos Pontos Turisticos:\n");
  scanf("%d", &pontoTuristico1);


  // Área para exibição dos dados da cidade
printf("\n--- Dados da Carta 1 ---\n ");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", população1);
printf("Area: %f KM²\n", area1);
printf("PIB: %f Bilhões de Reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontoTuristico1);

printf("\n---Carta 2 ---\n");

char estado2[12]; 
char codigo2[5];
char cidade2[50];
int população2;
float area2;
float pib2;
int pontoTuristico2;



  // Área para entrada de dados
 
  printf("Digite o Estado de A-H:\n");
  scanf(" %s", estado2); //string não precisa do &

  printf("Digite o Código da Carta:\n");
  scanf(" %s", codigo2); // não precisa do &

  printf("Digite o Nome da Cidade:\n");
  scanf(" %[^\n]", cidade2); // Lê a palavra com espaços como EX: "São Paulo" // não precisa do &

  printf("Digite a População da Cidade:\n");
  scanf("%d", &população2);

  printf("Digite Àrea da Cidade:\n");
  scanf(" %f", &area2);

  printf("Digite O Pib da Cidade:\n");
  scanf(" %f", &pib2);
  printf("Digite Quantos Pontos Turisticos:\n");
  scanf("%d", &pontoTuristico2);


  // Área para exibição dos dados da cidade
printf("\n--- Dados da Carta 2 ---\n ");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Area: %f KM²\n", area2);
printf("PIB: %f Bilhões de Reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontoTuristico2);

printf("--------------------------------");

// depois de montar o primeiro modelo copiei e colei os metodos utilizados na primeira carta e so atualizei os dados de 1 para 2.








return 0;
} 
