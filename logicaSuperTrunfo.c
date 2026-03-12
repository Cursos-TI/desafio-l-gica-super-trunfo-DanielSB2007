#include <stdio.h>

int main() {

    printf("Bem vindo ao criador de cartas do super Trunfo! \n");

//Variáveis para o cadastro das cartas

    //Informações da carta 1
char estado1;
char codigo1[4];
char nome1[100];
unsigned long int populacao1;
float area1;
float PIB1;
int turismo1;
float densidade1;
float PIBpercapita1;
float SuperPoder1;

//Informações da carta 2
char estado2;
char codigo2[4];
char nome2[100];
unsigned long int populacao2;
float area2;
float PIB2;
int turismo2;
float densidade2;
float PIBpercapita2;
float SuperPoder2;


// Criação das cartas

//carta 1


printf("vamos criar a carta 1!\n");
printf("Primeiro escolha um estado (Um letra entre A ao H).  \n");
scanf("%c", &estado1);
printf("Agora crie um codigo para a carta (Digite a mesma letra no estado mais a numeração de 01 a 04 [Ex: D03]). \n");
scanf("%s", &codigo1);
getchar(); // Limpa o buffer do teclado para evitar problemas com a leitura de strings
printf("Agora digite o nome de uma cidade. \n");
fgets(nome1,100, stdin); // Lê o nome da cidade, permitindo espaços
printf("Digite o numero da população da cidade. \n");
scanf("%d", &populacao1);
printf("Digite a Área da cidade (em km²). \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade. \n");
scanf("%f", &PIB1);
printf("E por ultimo a quantidade de pontos de pontos turisticos na região. \n");
scanf("%d", &turismo1);

//carta 2

printf("Agora vamos criar a carta 2!\n");
printf("Digite um letra entre A ao H por gentileza! \n");
scanf("%c", &estado2);
printf("Digite a mesma letra usada para o estado juntamente da numeração 01 a 04. \n");
scanf("%s", &codigo2);
getchar();
printf("Digite o nome da cidade. \n");
fgets(nome2,100, stdin);
printf("Digite o numero da população da cidade. \n");
scanf("%d", &populacao2);
printf("Digite a Área da cidade (em km²). \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade. \n");
scanf("%e", &PIB2);
printf("Digite a quantidade de pontos de pontos turisticos na região. \n");
scanf("%d", &turismo2);

// Cálculo da densidade populacional e PIB per capita e superpoder para a carta 1
densidade1 = populacao1 / area1;
PIBpercapita1 = PIB1 / populacao1;
SuperPoder1 = populacao1 + area1 + PIB1 + turismo1 + 1/densidade1 + PIBpercapita1;

// Cálculo da densidade populacional e PIB per capita e superpoder para a carta 2
densidade2 = populacao2 / area2;
PIBpercapita2 = PIB2 / populacao2;
SuperPoder2 = populacao2 + area2 + PIB2 + turismo2 + 1/densidade2 + PIBpercapita2;

//Comparação entre 1 atributo das cartas (área)

printf("Comparação entre as cartas:\n");
printf("Carta1: %s : %f\n", nome1, area1);
printf("Carta2: %s : %f\n", nome2, area2);
if (area1 > area2) {
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
} else{
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
}


return 0;
}

