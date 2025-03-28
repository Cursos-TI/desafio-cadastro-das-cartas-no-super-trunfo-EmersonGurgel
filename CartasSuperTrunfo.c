#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//INICIO DA CARTA A01 (ESTADO A);
// Definição de variáveis do (estado-carta A01);
// A PARTIR DA CARTA A02 FOI USADO (VARIAVEL+ IDENTIFICAÇÃO DA CARTA);
// EX: "ESTADO+a02), ESTADO+A02, ESTADO+B01, ESTADO+B02...;

char estado;
char codigo[20];
char nomedacidade[20];
unsigned long int populacao;
float area;
float pib;
int pontosturisticos;
float densidadepopulacional;
float pibpercapita;
float superPoder;
//titulo de apresentação;
printf("                                                     Bem vindo ao Desafio Super Trunfo.\n\n\n");
printf("Digite as informações da Carta A01.\n\n");

// dizendo ao usuario as informações que serão coletadas e coletando elas;
printf("Digite o Estado:\n");
scanf(" %c", &estado);

printf("Digite o Código da Cidade:\n");
scanf(" %s", codigo);

printf("Digite o nome da Cidade:\n");
scanf(" %20[^\n]", nomedacidade);

printf("Digite a população:\n");
scanf("%lu", &populacao);

printf("Digite a Área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o Número de Pontos Turísticos:\n");
scanf("%d", &pontosturisticos);
printf("\n\n");

//função do calculo densidade populacional
// população / área;
densidadepopulacional = populacao / area;

//função do calculo do PIB per capita;
// PIB / população;
              //conversão explicita de "int" para "float";
pibpercapita = (float) pib / populacao;

//Calculo do super poder da carta;
            //conversão explicita de "int" para "float";
superPoder = (float)populacao + area + pib + pontosturisticos - densidadepopulacional + pibpercapita;

//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da Carta A01:\n");
printf("Estado: %c\n", estado);
printf("Código da Cidade: %s\n", codigo);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("População: %lu\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Pontos Turísticos: %d\n", pontosturisticos);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
printf("PIB per Capita: %f Reais\n", pibpercapita);
printf("Super Poder: %.2f", superPoder);
printf("\n\n");

//inicio da carta A02 (estado A);

// Variaveis da carta A02 (estado A);
//foi adicionado "a02" a frente das variaveis para facilitar a identificacão;
//EX: ESTADO+a02;

char estadoa02;
char codigoa02[20];
char nomedacidadea02[20];
unsigned long int populacaoa02;
float areaa02;
float piba02;
int pontosturisticosa02;
float densidadepopulacionala02;
float pibpercapitaa02;
float superPodera02;

//introdução de titúlo da carta A02;
printf("Digite as informações da Carta A02.\n\n");


// dizendo ao usuario as informações que serão coletadas e coletando elas
printf("Digite o Estado:\n");
scanf(" %c", &estadoa02);

printf("Digite o Código da Cidade:\n");
scanf(" %s", codigoa02);

printf("Digite o nome da Cidade:\n");
scanf(" %20[^\n]", nomedacidadea02);

printf("Digite a população:\n");
scanf("%lu", &populacaoa02);

printf("Digite a Área:\n");
scanf("%f", &areaa02);

printf("Digite o PIB:\n");
scanf("%f", &piba02);

printf("Digite o número de Pontos Turísticos:\n");
scanf("%d", &pontosturisticosa02);
printf("\n\n\n");

//função do calculo densidade populacional
// população / área;
densidadepopulacionala02 = populacaoa02 / areaa02;

//função do calculo do PIB per capita;
// PIB / população;
                 //conversão explicita de "int" para "float";
pibpercapitaa02 = (float) piba02 / populacaoa02;

//Calculo do super poder da carta;
            //conversão explicita de "int" para "float";
superPodera02 = (float)populacaoa02 + areaa02 + piba02 + pontosturisticosa02 - densidadepopulacionala02 + pibpercapitaa02;


//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da Carta A02:\n");
printf("Estado: %c\n", estadoa02);
printf("Código da Cidade: %s\n", codigoa02);
printf("Nome da Cidade: %s\n", nomedacidadea02);
printf("População: %lu\n", populacaoa02);
printf("Área: %.2f km²\n", areaa02);
printf("PIB: %.2f bilhões de reais\n", piba02);
printf("Pontos Turísticos: %d\n", pontosturisticosa02);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacionala02);
printf("PIB per Capita: %f Reais\n", pibpercapitaa02);
printf("Super Poder: %.2f", superPodera02);
printf("\n\n");


//sistema de menus para o usuário escolher os atributos que serão comparados;
//variáveis para armazenar os resultados da comparação (resultado1 e resultado2) e das escolhas de atributos que serão comparados (primeiroAtributo e segundoAtributo);


printf(" ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO DAS CARTAS A01 E A02\n\n");
int resultado1, resultado2;
int primeiroAtributo, segundoAtributo;

//menu 1;
//só será usado esses 5 atributos para o sistema de comparação (igual ao desafio anterior);

printf("Faça duas escolhas de atributos das cartas (AO1 e A02) para serem comparadas!\n\n");
printf("Escolha uma opção:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Populacional\n\n");
scanf("%d", &primeiroAtributo);

//sistema de menu da primeira escolha;

switch (primeiroAtributo) {
  case 1:
  printf("Atributo população!\n");
  resultado1 = populacao > populacaoa02 ? 1 : 0 ;
  break;
  case 2:
  printf("Atributo Área\n");
  resultado1 = area > areaa02 ? 1 : 0 ; 
  break;
  case 3:
  printf("Atributo PIB\n");
  resultado1 = pib > piba02 ? 1 : 0 ;
  break;
  case 4:
  printf("Atributo Pontos Turisticos\n");
  resultado1 = pontosturisticos > pontosturisticosa02 ? 1 : 0 ;
  break;
  case 5:
  printf("Atributo Densidade Populacional\n");
  resultado1 = densidadepopulacional < densidadepopulacionala02 ? 1 : 0 ;
  break;
  default:
  printf("Opção inválida!\n");
  break;
}

//menu 2

printf("Escolha o segundo atributo (Diferente do primeiro atributo!)\n\n");
printf("Escolha uma opção:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Populacional\n\n");
scanf("%d", &segundoAtributo);

//sistema de menu da segunda escolha;

if (segundoAtributo == primeiroAtributo)
{
  printf("Você escolheu o mesmo atributo! Tente novamente com outra opção!\n");
} else {
  switch(segundoAtributo){
    case 1:
    printf("Atributo população!\n");
    resultado2 = populacao > populacaoa02 ? 1 : 0 ;
    break;
    case 2:
    printf("Atributo Área\n");
    resultado2 = area > areaa02 ? 1 : 0 ; 
    break;
    case 3:
    printf("Atributo PIB\n");
    resultado2 = pib > piba02 ? 1 : 0 ;
    break;
    case 4:
    printf("Atributo Pontos Turisticos\n");
    resultado2 = pontosturisticos > pontosturisticosa02 ? 1 : 0 ;
    break;
    case 5:
    printf("Atributo Densidade Populacional\n");
    resultado2 = densidadepopulacional < densidadepopulacionala02 ? 1 : 0 ;
    break;
    default:
    printf("Opção inválida!\n");
    break;

  }
  
}

//sistema que identifica qual escolha foi feita para aprensentar as informações corretas do atributo e comparação solitado pelo usuário;
//if((primeiroAtributo == 1)) quer dizer que o usuario selecionou a primeira opção como "1" e "&&" para verificar se ambos são verdadeiros e if((segundoAtributo == 2)) quer dizer que o usuario escolheu a opção 2;
//se "&&" estiver correto vai ser exibido o texto que a carta 1 é a vencedora;
// "!=" se ambos fizerem um ponto será exibido empate;
// caso nao dê nenhuma dessas opções será considerado vitória da carta 2;

if((primeiroAtributo == 1) && (segundoAtributo == 2)) {

if(resultado1 && resultado2) {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (população) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (população) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Você empatou!\n\n");
}  else {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
} 
if ( (primeiroAtributo == 1) && (segundoAtributo == 3)) {
if (resultado1 && resultado2) {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (População) - (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Você empatou!\n\n");
}  else {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
 if ( (primeiroAtributo == 1) && (segundoAtributo == 4)){
  if (resultado1 && resultado2) {
    printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 1 - (Pontos turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (resultado1 != resultado2) {
    printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos Turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Você empatou!\n\n");
  }  else {
    printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  }
}
  if ( (primeiroAtributo== 1) && (segundoAtributo == 5) ){
    if(resultado1 && resultado2) {
      printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
      printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
      printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
      printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
      printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Você empatou!\n\n");
  } else {
    printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  }
  } 
  if ( (primeiroAtributo ==2 ) && (segundoAtributo == 1) ){
    if(resultado1 && resultado2) {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
printf("Carta 2 - (população) (%s): %lu\n", nomedacidadea02, populacaoa02);
printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
printf("Carta 2 - (população) (%s): %lu\n", nomedacidadea02, populacaoa02);
printf("Você empatou!\n\n");
} else {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
printf("Carta 2 - (população) (%s): %lu\n", nomedacidadea02, populacaoa02);
printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
} 
}
if ( (primeiroAtributo == 2 ) && (segundoAtributo == 3 ) ){
  if(resultado1 && resultado2) {
 printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
 printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
 printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
 printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
 printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Você empatou!\n\n");
} else {
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
} 
}
if ( (primeiroAtributo == 2 ) && (segundoAtributo == 4) ){
  if(resultado1 && resultado2) {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
printf("Carta 2 - (Pontos Turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
printf("Carta 2 - (Pontos Turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
printf("Você empatou!\n\n");
} else {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
printf("Carta 2 - (Pontos Turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 2) && (segundoAtributo == 5) ){
  if(resultado1 && resultado2) { 
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
printf("Você empatou!\n\n");
} else {
printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 3) && (segundoAtributo == 1) ){
  if(resultado1 && resultado2) {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (População) - (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Você empatou!\n\n");
}  else {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 3) && (segundoAtributo == 2) ){
  if(resultado1 && resultado2) {
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
    printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
 } else if (resultado1 != resultado2) {
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Você empatou!\n\n");
 } else {
  printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
  printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
 }
}
if ( (primeiroAtributo == 3) && (segundoAtributo == 4) ){
  if(resultado1 && resultado2) {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Você empatou!\n\n");
} else {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 3) && (segundoAtributo == 5) ){
  if(resultado1 && resultado2) {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Você empatou!\n\n");
} else {
  printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 4) && (segundoAtributo == 1) ){
  if(resultado1 && resultado2) {
    printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
}  else if (resultado1 != resultado2) {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Você empatou!\n\n");
} else {
  printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
  printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 4) && (segundoAtributo == 2) ){
  if(resultado1 && resultado2) {
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (resultado1 != resultado2) {
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Você empatou!\n\n");
  } else {
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  }
}
if ( (primeiroAtributo == 4) && (segundoAtributo == 3) ){
  if(resultado1 && resultado2) {
    printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
    printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  }  else if (resultado1 != resultado2) {
    printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
    printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Você empatou!\n\n");
  } else {
    printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
    printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 4) && (segundoAtributo == 5) ){
  if(resultado1 && resultado2) {
    printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
    printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
    printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
}  else if (resultado1 != resultado2) {
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Você empatou!\n\n");
} else {
  printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
  printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
}
if ( (primeiroAtributo == 5) && (segundoAtributo == 1) ){
  if(resultado1 && resultado2) {
   printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
   printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
   printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
   printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
   printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (resultado1 != resultado2) {
   printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
   printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
   printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
   printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
   printf("Você empatou!\n\n");
} else {
   printf("Carta 1 - (População) (%s): %lu\n", nomedacidade, populacao);
   printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
   printf("Carta 2 - (População) (%s): %lu\n", nomedacidadea02, populacaoa02);
   printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
   printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
}
} 
if ( (primeiroAtributo == 5) && (segundoAtributo == 2) ){
  if(resultado1 && resultado2) { 
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
    } else if (resultado1 != resultado2) {
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Você empatou!\n\n");
    } else {
    printf("Carta 1 - (Área) (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (Área) (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
    }
    }
    if ( (primeiroAtributo == 5) && (segundoAtributo == 3) ){
      if(resultado1 && resultado2) {
        printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
        printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
        printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
        printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
      } else if (resultado1 != resultado2) {
        printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
        printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
        printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
        printf("Você empatou!\n\n");
      } else {
        printf("Carta 1 - (PIB) (%s): %.2f\n", nomedacidade, pib);
        printf("Carta 2 - (PIB) (%s): %.2f\n", nomedacidadea02, piba02);
        printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
        printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
      }
      }
      if ( (primeiroAtributo == 5) && (segundoAtributo == 4) ){
        if(resultado1 && resultado2) {
          printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
          printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
          printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
          printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
          printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
      }  else if (resultado1 != resultado2) {
        printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
        printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
        printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
        printf("Você empatou!\n\n");
      } else {
        printf("Carta 1 - (Pontos Turisticos) (%s): %d\n", nomedacidade, pontosturisticos);
        printf("Carta 2 - (Pontos turisticos) (%s): %d\n", nomedacidadea02, pontosturisticosa02);
        printf("Carta 1 - (Densidade Populacional) (%s): %.2f\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 - (Densidade Populacional) (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
        printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
      }
      }


/*
////////////////////////////////////////////////////////
estruturada usada para facilitar a processo;

if ( (primeiroAtributo == ) && (segundoAtributo == ) ){
    if(resultado1 && resultado2) {
      printf("Você Venceu!\n");
} else if (resultado1 != resultado2) {
  printf("Você empatou!\n");
  } else {
    printf("Você perdeu!\n");

////////////////////////////////////////////////////////
*/

/*
//////////////////////////////// ANTIGO SISTEMA DE COMPARAÇÃO ///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// NÃO    SERÁ    MAIS   USADO  ///////////////////////////////////////////////////////////////////////////////////////////



printf(" ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO DAS CARTAS A01 E A02\n\n");
int opcao;
printf("Escolha uma opção:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Populacional\n\n");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
 printf("O atributo escolhido foi (População):\n\n");
  break;
case 2:
printf("O atributo escolhido foi (Área):\n\n");
break;
case 3:
printf("O atributo escolhido foi (PIB):\n\n");
break;
case 4:
printf("O atributo escolhido foi (Pontos Turisticos):\n\n");
break;
case 5:
printf("O atributo escolhido foi (Densidade populacional):\n\n");
default:
printf("O atributo escolhido foi (opção inválida)\n\n");
  break;
}

if (opcao == 1)
{
  if (populacao > populacaoa02)
  {
    printf("Carta 1 - (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (populacao < populacaoa02) {
    printf("Carta 1 - (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  } else {
    printf("Carta 1 - (%s): %lu\n", nomedacidade, populacao);
    printf("Carta 2 - (%s): %lu\n", nomedacidadea02, populacaoa02);
    printf("Houve um empate!\n\n");
  }
}
if (opcao == 2)
{
  if (area > areaa02)
  {
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (area < areaa02) {
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  } else {
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, area);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, areaa02);
    printf("Houve um empate!\n\n");
  }
}
  
if (opcao == 3)
{
  if (pib > piba02)
  {
  printf("Carta 1 - (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (pib < piba02) {
  printf("Carta 1 - (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
  } else {
  printf("Carta 1 - (%s): %.2f\n", nomedacidade, pib);
  printf("Carta 2 - (%s): %.2f\n", nomedacidadea02, piba02);
  printf("Houve um empate!\n\n");  
  }
  
}
if (opcao == 4)
{
if (pontosturisticos > pontosturisticosa02){
  printf("Carta 1 - (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
} else if (pontosturisticos < pontosturisticosa02) {
  printf("Carta 1 - (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Carta 2 - (%s) Venceu!\n\n", nomedacidadea02);
} else {
  printf("Carta 1 - (%s): %d\n", nomedacidade, pontosturisticos);
  printf("Carta 2 - (%s): %d\n", nomedacidadea02, pontosturisticosa02);
  printf("Houve um empate!\n\n");
}

}

if (opcao == 5)
{
  if(densidadepopulacional < densidadepopulacionala02) {
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 1 - (%s) Venceu!\n\n", nomedacidade);
  } else if (densidadepopulacional > densidadepopulacionala02){
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Carta 2 -(%s) Venceu!\n\n", nomedacidadea02);
  } else {
    printf("Carta 1 - (%s): %.2f\n", nomedacidade, densidadepopulacional);
    printf("Carta 2 - (%s): %.2f\n", nomedacidadea02,densidadepopulacionala02);
    printf("Houve um empate!\n\n");
  }
}


*/

  


    /*  printf("Comparação das Cartas(Atributo: População):\n\n");
      
    printf("Carta 1 - %s: %lu\n", nomedacidade, populacao);
    printf("Carta 2 - %s: %lu\n", nomedacidadea02, populacaoa02);
 
    if (populacao > populacaoa02) {
  printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
} else { printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);}

      printf("Comparação das Cartas(Atributo: Área):\n\n");

      printf("Carta 1 - %s: %.2f\n", nomedacidade, area);
      printf("Carta 2 - %s: %.2f\n", nomedacidadea02, areaa02);
      
      if (area > areaa02) {
        printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
      } else {printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);}
      
      printf("Comparação das Cartas(Atributo: PIB):\n\n");

      printf("Carta 1 - %s: %.2f\n", nomedacidade, pib);
      printf("Carta 2 - %s: %.2f\n", nomedacidadea02, piba02);

      if (pib > piba02) {
        printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
      } else { printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);}

      printf("Comparação das Cartas(Atributo: Pontos Turisticos):\n\n");

      printf("Carta 1 - %s: %d\n", nomedacidade, pontosturisticos);
      printf("Carta 2 - %s: %d\n", nomedacidadea02, pontosturisticosa02);
      
      if (pontosturisticos > pontosturisticosa02) {
        printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
      } else {printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);}

      printf("Comparação das Cartas(Atributo: Densidade Populacional):\n\n");
       
      printf("Carta 1 - %s: %.2f\n", nomedacidade, densidadepopulacional);
      printf("Carta 2 - %s: %.2f\n", nomedacidadea02, densidadepopulacionala02);
      
      if (densidadepopulacional > densidadepopulacionala02) {
        printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);
      } else {printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);}

      printf("Comparação das Cartas(Atributo: PIB Per Capita):\n\n");

      printf("Carta 1 - %s: %f\n", nomedacidade, pibpercapita);
      printf("Carta 2 - %s: %f\n", nomedacidadea02, pibpercapitaa02);

      if (pibpercapita > pibpercapitaa02) {
        printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
      } else {printf("Resultado: Carta 2 (%s) Venceu!\n\n", nomedacidadea02);}

      printf("Comparação das Cartas(Atributo: Super poder):\n\n");

      printf("Carta 1 - %s: %.2f\n", nomedacidade, superPoder);
      printf("Carta 2 - %s: %.2f\n", nomedacidadea02, superPodera02);

      if (superPoder > superPodera02) {
        printf("Resultado: Carta 1 (%s) Venceu!\n\n", nomedacidade);
      } else {printf("Resultado: Carta 2 (%s) venceu\n\n", nomedacidadea02);}

      */

/* ESTE TRECHO DO CODIGO NÃO ESTÁ SENDO USADO
   ESTE TRECHO DO CODIGO NÃO ESTÁ SENDO USADO
   ESTE TRECHO DO CODIGO NÃO ESTÁ SENDO USADO
   ESTE TRECHO DO CODIGO NÃO ESTÁ SENDO USADO

ANTIGA FUNÇÃO DE COMPARAÇÃO DAS CARTAS A01 E A02
   
   SERÁ FEITO O SISTEMA DE COMPARAÇÃO DAS CARTAS
   EXCLUSIVO APENAS NAS CARTAS A01 A02

 printf("COMPARAÇÃO DAS CARTAS:\n\n");

int resultadoPopulacao;
int resultadoArea;
int resultadoPib;
int resultadoPontosTuristicos;
int resultadoDensidadePopulacional;
int resultadoPibPerCapita;
int resultadoSuperPoder;


resultadoPopulacao = populacao > populacaoa02;
printf("População (Carta 1): %d\n", resultadoPopulacao);

resultadoArea = area > areaa02;
printf("Área (Carta 1): %d\n", resultadoArea);

resultadoPib = pib > piba02;
printf("PIB (Carta 1): %d\n", resultadoPib);

resultadoPontosTuristicos = pontosturisticos > pontosturisticosa02;
printf("Pontos Turisticos (Carta 1): %d\n", resultadoPontosTuristicos);

resultadoDensidadePopulacional = densidadepopulacional < densidadepopulacionala02;
printf("Densidade Populacional (Carta 2): %d\n", resultadoDensidadePopulacional);

resultadoPibPerCapita = pibpercapita > pibpercapitaa02;
printf("PIB per Capita (Carta 1): %d\n", resultadoPibPerCapita);

resultadoSuperPoder = superPoder > superPodera02;
printf("Super Poder (Carta 1): %d\n\n", resultadoSuperPoder); */


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//TÍTULO DA CARTA BO1
printf("Digite as informações da Carta B01.\n\n");

// INÍCIO DO ESTADO B;
//INÍCIO DA CARTA B01

//DEFININDO AS VARIÁVEIS DA CARTA B01 (ESTADO B);
// FOI USADO "B01" AO FINAL DO NOME DA VARÍAVEL PARA FACILITAR A IDENTIFICAÇÃO;
// EX: ESTADO+b01;
char estadob01;
char codigob01[20];
char nomedacidadeb01[20];
unsigned long int populacaob01;
float areab01;
float pibb01;
int pontosturisticosb01;
float densidadepopulacionalb01;
float pibpercapitab01;
float superPoderb01;

// SERÁ FEITA A SOLICITACÃO E A COLETA DOS DADOS DAS CARTAS AO USUÁRIO;
printf("Digite o Estado:\n");
scanf(" %c", &estadob01);

printf("Digite o Código da Cidade:\n");
scanf(" %s", codigob01);

printf("Digite o nome da Cidade:\n");
scanf(" %20[^\n]", nomedacidadeb01);

printf("Digite a população:\n");
scanf("%lu", &populacaob01);

printf("Digite a Área:\n");
scanf("%f", &areab01);

printf("Digite o PIB:\n");
scanf("%f", &pibb01);

printf("Digite o número de Pontos Turísticos:\n");
scanf("%d", &pontosturisticosb01);
printf("\n\n");

//função do calculo densidade populacional
// população / área;
densidadepopulacionalb01 = populacao / area;

//função do calculo do PIB per capita;
// PIB / população;
pibpercapitab01 = (float) pib / populacao;

//Calculo do super poder da carta;
            //conversão explicita de "int" para "float";
superPoderb01 = (float)populacaob01 + areab01 + pibb01 + pontosturisticosb01 - densidadepopulacionalb01 + pibpercapitab01;

//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da Carta B01:\n");
printf("Estado: %c\n", estadob01);
printf("Código da Cidade: %s\n", codigob01);
printf("Nome da Cidade: %s\n", nomedacidadeb01);
printf("População: %lu\n", populacaob01);
printf("Área: %.2f km²\n", areab01);
printf("PIB: %.2f bilhões de reais\n", pibb01);
printf("Pontos Turísticos: %d\n", pontosturisticosb01);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacionalb01);
printf("PIB per Capita: %f Reais\n", pibpercapitab01);
printf("Super Poder: %.2f", superPoderb01);
printf("\n\n\n");

//INICIO DA CARTA B02 (PERTENCE AO ESTADO B);
//DEFININDO AS VARIÁVEIS DA CARTA B02 (ESTADO B);
// FOI USADO "B02" AO FINAL DO NOME DA VARÍAVEL PARA FACILITAR A IDENTIFICAÇÃO;
// EX: ESTADO+b02;

char estadob02;
char codigob02[20];
char nomedacidadeb02[20];
unsigned long int populacaob02;
float areab02;
float pibb02;
int pontosturisticosb02;
float densidadepopulacionalb02;
float pibpercapitab02;
float superPoderb02;

// SERÁ FEITA A SOLICITACÃO E A COLETA DOS DADOS DAS CARTAS AO USUÁRIO;
printf("digite as informações da Carta B02.\n\n");
// dizendo ao usuario as informações que serão coletadas e coletando elas;
printf("Digite o Estado:\n");
scanf(" %c", &estadob02);

printf("Digite o Código:\n");
scanf(" %s", codigob02);

printf("Digite o nome da Cidade:\n");
scanf(" %20[^\n]", nomedacidadeb02);

printf("Digite a população:\n");
scanf("%lu", &populacaob02);

printf("Digite a Área:\n");
scanf("%f", &areab02);

printf("Digite o PIB:\n");
scanf("%f", &pibb02);

printf("Digite o número de Pontos Turísticos:\n");
scanf("%d", &pontosturisticosb02);
printf("\n\n");

//função do calculo densidade populacional
// população / área;
densidadepopulacionalb02 = populacaob02 / areab02;

//função do calculo do PIB per capita;
// PIB / população;
pibpercapitab02 = (float) pibb02 / populacaob02;

//Calculo do super poder da carta;
            //conversão explicita de "int" para "float";
superPoderb02 = (float)populacaob02 + areab02 + pibb01 + pontosturisticosb02 - densidadepopulacionalb02 + pibpercapitab02;
//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da Carta B02:\n");
printf("Estado: %c\n", estadob02);
printf("Código da Cidade: %s\n", codigob02);
printf("Nome da Cidade: %s\n", nomedacidadeb02);
printf("População: %lu\n", populacaob02);
printf("Área: %.2f km²\n", areab02);
printf("PIB: %.2f bilhões de reais\n", pibb02);
printf("Pontos Turísticos: %d\n", pontosturisticosb02);
printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacionalb02);
printf("PIB per Capita: %f Reais\n", pibpercapitab02);
printf("Super Poder: %.2f", superPoderb02);
printf("\n\n");

//Fim do programa;
return 0 ;

}