#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


//Variáveis para o cadastro das cartas

int escolhaJogador;
int resultado;

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


    printf("Bem vindo ao criador de cartas do super Trunfo! \n");
    
    
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
;


printf("Escolha qual atributo das cartas será comparado: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Turismo \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per capita \n");
scanf("%d", &resultado);
switch (resultado)
{
case 1:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: População \n");
printf("Carta1: %d habitantes\n", populacao1);
printf("Carta2: %d habitantes\n", populacao2);
if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (populacao1 < populacao2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
        printf("Resultado: Empate!\n");
}
    break;
case 2:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: Área \n");
printf("Carta1: %.2f km²\n", area1);
printf("Carta2: %.2f km²\n", area2);
if (area1 > area2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (area1 < area2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}
    break;
    case 3:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: PIB \n");
printf("Carta1: %.2f\n", PIB1);
printf("Carta2: %.2f\n", PIB2);
if (PIB1 > PIB2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (PIB1 < PIB2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}
    break;
    case 4:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: Turismo \n");
printf("Carta1: %d pontos\n", turismo1);
printf("Carta2: %d pontos\n", turismo2);
if (turismo1 > turismo2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (turismo1 < turismo2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}
    break;
    case 5:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: Densidade Populacional \n");
printf("Carta1: %.2f habitantes/km²\n", densidade1);
printf("Carta2: %.2f habitantes/km²\n", densidade2);
if (densidade1 < densidade2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (densidade1 > densidade2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}
    break;
    case 6:
printf("***Comparação entre as cartas***\n");
printf("Nome da Carta1: %s \n", nome1);
printf("Nome da Carta2: %s \n", nome2);
printf("Atributo de comparação: PIB per capita \n");
printf("Carta1: %.2f\n", PIBpercapita1);
printf("Carta2: %.2f\n", PIBpercapita2);
if (PIBpercapita1 > PIBpercapita2) {
    printf("Resultado: Carta 1 venceu!\n");
} else if (PIBpercapita1 < PIBpercapita2) {
    printf("Resultado: Carta 2 venceu!\n");
} else {
    printf("Resultado: Empate!\n");
}
    break;
default:
printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
    break;
}
  
return 0;
    
};

