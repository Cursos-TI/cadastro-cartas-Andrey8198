#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state1, state2, cardCode1[4], cardCode2[4], cityName1[50], cityName2[50];
  int population1, population2, turistPoint1, turistPoint2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  // Carta 1
  printf("Cadastro da carta n°1\n\n");

  printf("Qual é o código da carta: ");
  scanf("%s", cardCode1);
  state1 = cardCode1[0];

  printf("Insira o nome da cidade: ");
  scanf("%s", cityName1);

  printf("Insira a população da cidade: ");
  scanf("%i", &population1);

  printf("Insira o Produto Interno Bruto (PIB) da cidade: ");
  scanf("%f", &pib1);

  printf("Insira a área em km² da cidade: ");
  scanf("%f", &area1);

  printf("Quantos são os pontos turísticos da cidade: ");
  scanf("%i", &turistPoint1);

  printf("\n");
  
  // Carta 2
  printf("Cadastro da carta n°2\n\n");

  printf("Qual é o código da carta: ");
  scanf("%s", cardCode2);
  state2 = cardCode2[0];

  printf("Insira o nome da cidade: ");
  scanf("%s", cityName2);

  printf("Insira a população da cidade: ");
  scanf("%i", &population2);

  printf("Insira o Produto Interno Bruto (PIB) da cidade: ");
  scanf("%f", &pib2);

  printf("Insira a área em km² da cidade: ");
  scanf("%f", &area2);

  printf("Quantos são os pontos turísticos da cidade: ");
  scanf("%i", &turistPoint2);

  // Área para exibição dos dados da cidade
  printf("\nCadastro das cartas\n");

  printf("\n==========================\n");
  printf("            %s           \n", cardCode1);
  printf("\nEstado: %c\n", state1);
  printf("Nome da cidade: %s\n", cityName1);
  printf("População da cidade: %i\n", population1);
  printf("PIB da cidade: %f\n", pib1);
  printf("Área da cidade em km²: %f\n", area1);
  printf("Quantidade de pontos turísticos: %i\n", turistPoint1);
  printf("==========================\n");
  printf("\n==========================\n");
  printf("            %s           \n", cardCode2);
  printf("\nEstado: %c\n", state2);
  printf("Nome da cidade: %s\n", cityName2);
  printf("População da cidade: %i\n", population2);
  printf("PIB da cidade: %f\n", pib2);
  printf("Área da cidade em km²: %f\n", area2);
  printf("Quantidade de pontos turísticos: %i\n", turistPoint2);
  printf("==========================\n");

  return 0;
} 
