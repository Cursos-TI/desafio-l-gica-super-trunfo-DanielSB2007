#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


//Variáveis para o cadastro das cartas

int escolhaJogador, escolhaAtributo, escolhaAtributo2;
int resultado, resultado2;
int PrimeiroAtributo, PrimeiroAtributo2;
int SegundoAtributo, SegundoAtributo2;

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

//escolha de comparação

printf("Quantos atributos deseja comparar? \n");
printf("1. Comparar apenas um atributo \n");
printf("2. Comparar dois os atributos \n");
scanf("%d", &escolhaJogador);


switch (escolhaJogador) {

    // Comparação de um atributo
case 1:
    printf("Escolha qual atributo das cartas será comparado: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Turismo \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per capita \n");
scanf("%d", &escolhaAtributo);

switch (escolhaAtributo) {
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

// Comparação de dois atributos

case 2:
    printf("Escolha qual será o primeiro atributo das cartas que será comparado: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Turismo \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per capita \n");
scanf("%d", &escolhaAtributo);

switch (escolhaAtributo) {
case 1:
printf("Você escolheu População.\n");
resultado = populacao1 > populacao2 ? 1 : 0;
PrimeiroAtributo = populacao1;
PrimeiroAtributo2 = populacao2;
    break;
case 2:
printf("Você escolheu Área.\n");
resultado = area1 > area2 ? 1 : 0;
PrimeiroAtributo = area1;
PrimeiroAtributo2 = area2;

    break;
    case 3:
printf("Você escolheu PIB.\n");
resultado = PIB1 > PIB2 ? 1 : 0;
PrimeiroAtributo = PIB1;
PrimeiroAtributo2 = PIB2;

    break;
    case 4:
printf("Você escolheu Turismo.\n");
resultado = turismo1 > turismo2 ? 1 : 0;
PrimeiroAtributo = turismo1;
PrimeiroAtributo2 = turismo2;

    break;
    case 5:
printf("Você escolheu Densidade Populacional.\n");
resultado = densidade1 < densidade2 ? 1 : 0;
PrimeiroAtributo = densidade1;
PrimeiroAtributo2 = densidade2;

    break;
    case 6:
printf("Você escolheu PIB per capita.\n");
resultado = PIBpercapita1 > PIBpercapita2 ? 1 : 0;
PrimeiroAtributo = PIBpercapita1;
PrimeiroAtributo2 = PIBpercapita2;

    break;
default:
printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
    break;
}
printf("Escolha qual será o segundo atributo das cartas que será comparado: \n");
    printf("Escolher o mesmo atributo para comparação não é permitido! \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Turismo \n");
printf("5. Densidade Populacional \n");
printf("6. PIB per capita \n");
scanf("%d", &escolhaAtributo2);
 
if (escolhaAtributo == escolhaAtributo2) {
    printf("A escolha do mesmo atributo para comparação não é permitida! Por favor, escolha atributos diferentes.\n");   
} else {
    switch(escolhaAtributo2) {
        case 1:
printf("Você escolheu População.\n");
resultado2 = populacao1 > populacao2 ? 1 : 0;
SegundoAtributo = populacao1;
SegundoAtributo2 = populacao2;
    break;
case 2:
printf("Você escolheu Área.\n");
resultado2 = area1 > area2 ? 1 : 0;
SegundoAtributo = area1;
SegundoAtributo2 = area2;
    break;
    case 3:
printf("Você escolheu PIB.\n");
resultado2 = PIB1 > PIB2 ? 1 : 0;
SegundoAtributo = PIB1;
SegundoAtributo2 = PIB2;

    break;
    case 4:
printf("Você escolheu Turismo.\n");
resultado2 = turismo1 > turismo2 ? 1 : 0;
SegundoAtributo = turismo1;
SegundoAtributo2 = turismo2;

    break;
    case 5:
printf("Você escolheu Densidade Populacional.\n");
resultado2 = densidade1 < densidade2 ? 1 : 0;
SegundoAtributo = densidade1;
SegundoAtributo2 = densidade2;

    break;
    case 6:
printf("Você escolheu PIB per capita.\n");
resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;
SegundoAtributo = PIBpercapita1;
SegundoAtributo2 = PIBpercapita2;

    break;
default:
printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
    break;
    }

    // Exibição dos resultados da comparação dos dois atributos

printf("Resultados da comparação:\n");
printf("Nome do país da cartai: %s\n", nome1);
printf("Nome do país da carta2: %s\n", nome2);
if (escolhaAtributo == 1) {
    printf("Primeiro atributo escolhido: População\n");
    printf("Carta 1: %d habitantes\n", populacao1);
    printf("Carta 2: %d habitantes\n", populacao2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo == 2) {
    printf("Primeiro atributo escolhido: Área\n");
    printf("Carta 1: %d km²\n", area1);
    printf("Carta 2: %d km²\n", area2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo == 3) {
    printf("Primeiro atributo escolhido: PIB\n");
    printf("Carta 1: %d milhões de dólares\n", PIB1);
    printf("Carta 2: %d milhões de dólares\n", PIB2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo == 4) {
    printf("Primeiro atributo escolhido: Turismo\n");
    printf("Carta 1: %d\n", turismo1);
    printf("Carta 2: %d\n", turismo2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo == 5) {
    printf("Primeiro atributo escolhido: Densidade Populacional\n");
    printf("Carta 1: %d habitantes/km²\n", densidade1);
    printf("Carta 2: %d habitantes/km²\n", densidade2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo == 6) {
    printf("Primeiro atributo escolhido: PIB per capita\n");
    printf("Carta 1: %d milhões de dólares\n", PIBpercapita1);
    printf("Carta 2: %d milhões de dólares\n", PIBpercapita2);
    if (resultado == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} if (escolhaAtributo2 == 1) {
    printf("Segundo atributo escolhido: População\n");
    printf("Carta 1: %d habitantes\n", populacao1);
    printf("Carta 2: %d habitantes\n", populacao2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo2 == 2) {
    printf("Segundo atributo escolhido: Área\n");
    printf("Carta 1: %d km²\n", area1);
    printf("Carta 2: %d km²\n", area2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo2 == 3) {
    printf("Segundo atributo escolhido: PIB\n");
    printf("Carta 1: %d milhões de dólares\n", PIB1);
    printf("Carta 2: %d milhões de dólares\n", PIB2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo2 == 4) {
    printf("Segundo atributo escolhido: Turismo\n");
    printf("Carta 1: %d\n", turismo1);
    printf("Carta 2: %d\n", turismo2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo2 == 5) {
    printf("Segundo atributo escolhido: Densidade Populacional\n");
    printf("Carta 1: %d habitantes/km²\n", densidade1);
    printf("Carta 2: %d habitantes/km²\n", densidade2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
} else if (escolhaAtributo2 == 6) {
    printf("Segundo atributo escolhido: PIB per capita\n");
    printf("Carta 1: %d milhões de dólares\n", PIBpercapita1);
    printf("Carta 2: %d milhões de dólares\n", PIBpercapita2);
    if (resultado2 == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
printf("Soma dos atributos da Carta 1: %d\n", PrimeiroAtributo + SegundoAtributo);
printf("Soma dos atributos da Carta 2: %d\n", PrimeiroAtributo2 + SegundoAtributo2);
if ((PrimeiroAtributo + SegundoAtributo) > (PrimeiroAtributo2 + SegundoAtributo2)) {
    printf("Resultado final: Carta 1 venceu!\n");
} else if ((PrimeiroAtributo + SegundoAtributo) < (PrimeiroAtributo2 + SegundoAtributo2)) {
    printf("Resultado final: Carta 2 venceu!\n");
} else {
    printf("Resultado final: Empate!\n");

break;
default:
    printf("Escolha inválida!\n");
}
}
}
return 0;
}
}

