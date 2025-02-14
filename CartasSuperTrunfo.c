#include <stdio.h>

// definicoes de estados e Cidades 
#define Estados 8
#define Cidades 4

// estrutura para repeticoes e para nao cadastrar varias variaveis
typedef struct {
  char num[4];
  char populacao;
  double area,pib;
  int Turistico;
} Cidade ;

int main() {
// criacao de vetor de Cidades chamado Cid
Cidade Cid[Estados*Cidades];

// criacao de vetor de Estados
char Est[Estados]=('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');

// criacao de variaveis para Loop de cidades
int l, p, index=0;

printf("••••••••••••••••••••\n Cartas S Trunfo\n ••••••••••••••••••••\n");

for (l=0; l<Estados; l++){
  for(p=1; p<Cidades; p++){
    sprintf(Cid[index].num, "%c%02d\n", Est[l], p);
  
    printf("Cadastro da Cidade %s:\n", Cid[index].num);
    
    printf("Escreva a Populacao;\n");
    scanf("%f, populacao");

    printf("Escreva Area:\n");
    scanf("%f, area");

    printf("Escreva o PIB:\n");
    scanf("%f, pib");

    printf(" Quantidade dePontos Turisticos?:");
    scanf("%i, Turistico");


}
}
}