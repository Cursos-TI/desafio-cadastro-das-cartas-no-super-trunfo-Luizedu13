#include <stdio.h>

int main(){
  char cidade[20];// variaveis padrão
  int populacao;
  double pib;
  float area;
  int Turistico;
  char estado[20];

  printf("-------------------------------------\n"); //printf com uma graça e para deixar bonito
  printf("          Cartas S. Trunfo\n");
  printf("-------------------------------------\n");

  
  printf("Escreva um Estado:\n");//cadastro de Estados
  scanf("%s", &estado);  

  printf("Escreva a Cidade:\n");//cadastro de cidade
  scanf(" %s", &cidade);    

  //cadastro de populacao e variavel para guardar
  printf("Escreva a Populacao:\n");
  scanf(" %f", &populacao);

  //cadastro da area e variavel para guardar
  printf("Escreva Area (Km²):\n");
  scanf(" %f", &area);
  
  //cadastro do PIB e variavel para guardar
  printf("Escreva o PIB (Em Bilhões):\n");
  scanf(" %f", &pib);

  //cadastro da quantidade de pontos Turisticos e variavel para guardar
  printf(" Quantidade de Pontos Turisticos:\n");
  scanf(" %i", &Turistico);
  
  //printf com arte e para deixar visualmente mais bomito as informacoes
  printf("-------------------------------------\n");
  printf("          Cartas Cadastrada\n");
  printf("-------------------------------------\n");


 return 0;
}
