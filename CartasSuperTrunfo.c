#include <stdio.h>

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
int populacao;
float area;
float pib;
int pontosturisticos;

//titulo de apresentação;
printf("                                                     Bem vindo ao Desafio Super Trunfo.\n\n\n");
printf("                                                                CARTA A01\n\n");

// dizendo ao usuario as informações que serão coletadas e coletando elas;
printf("Digite o estado:\n");
scanf(" %c", &estado);

printf("Digite o código:\n");
scanf(" %s", codigo);

printf("Digite o nome da cidade:\n");
scanf(" %20[^\n]", nomedacidade);

printf("Digite a população:\n");
scanf("%d", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("Digite o pib:\n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos);
printf("\n\n");

//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da carta A01:\n");
printf("Estado: %c\n", estado);
printf("Código da cidade: %s\n", codigo);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área: %f km²\n", area);
printf("Pib: %f\n", pib);
printf("Pontos turísticos: %d\n", pontosturisticos);
printf("\n\n");

//inicio da carta A02 (estado A);

// Variaveis da carta A02 (estado A);
//foi adicionado "a02" a frente das variaveis para facilitar a identificacão;
//EX: ESTADO+a02;
char estadoa02;
char codigoa02[20];
char nomedacidadea02[20];
int populacaoa02;
float areaa02;
float piba02;
int pontosturisticosa02;

//introdução de titúlo da carta A02;
printf("Carta A02\n\n");
printf("Nos campos abaixo informe as informações da carta A02.\n\n");

// dizendo ao usuario as informações que serão coletadas e coletando elas
printf("Digite o estado:\n");
scanf(" %c", &estadoa02);

printf("Digite o código da cidade:\n");
scanf(" %s", codigoa02);

printf("Digite o nome da cidade:\n");
scanf(" %20[^\n]", nomedacidadea02);

printf("Digite a população:\n");
scanf("%d", &populacaoa02);

printf("Digite área:\n");
scanf("%f", &areaa02);

printf("Digite o pib\n");
scanf("%f", &piba02);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticosa02);
printf("\n\n\n");

//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da carta A02:\n");
printf("Estado: %c\n", estadoa02);
printf("Código da cidade: %s\n", codigoa02);
printf("Nome da cidade: %s\n", nomedacidadea02);
printf("População: %d\n", populacaoa02);
printf("Área: %f km²\n", areaa02);
printf("Pib: %f\n", piba02);
printf("Pontos turísticos: %d\n", pontosturisticosa02);
printf("\n\n");

//TÍTULO DA CARTA BO1
printf("Carta B01\n\n");

// INÍCIO DO ESTADO B;
//INÍCIO DA CARTA B01

//DEFININDO AS VARIÁVEIS DA CARTA B01 (ESTADO B);
// FOI USADO "B01" AO FINAL DO NOME DA VARÍAVEL PARA FACILITAR A IDENTIFICAÇÃO;
// EX: ESTADO+b01;
char estadob01;
char codigob01[20];
char nomedacidadeb01[20];
int populacaob01;
float areab01;
float pibb01;
int pontosturisticosb01;

// SERÁ FEITA A SOLICITACÃO E A COLETA DOS DADOS DAS CARTAS AO USUÁRIO;
printf("Digite o estado:\n");
scanf(" %c", &estadob01);

printf("Digite o código:\n");
scanf(" %s", codigob01);

printf("Digite o nome da cidade:\n");
scanf(" %20[^\n]", nomedacidadeb01);

printf("Digite a população:\n");
scanf("%d", &populacaob01);

printf("Digite a área:\n");
scanf("%f", &areab01);

printf("Digite o pib:\n");
scanf("%f", &pibb01);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticosb01);
printf("\n\n");

//Nessa parte abaixo será imprimido os dados que foram coletados do usuario;
printf("Dados da carta B01:\n");
printf("Estado: %c\n", estadob01);
printf("Código da cidade: %s\n", codigob01);
printf("Nome da cidade: %s\n", nomedacidadeb01);
printf("População: %d\n", populacaob01);
printf("Área: %f km²\n", areab01);
printf("Pib: %f\n", pibb01);
printf("Pontos turísticos: %d\n", pontosturisticosb01);
printf("\n\n\n");

//INICIO DA CARTA B02 (PERTENCE AO ESTADO B);
//DEFININDO AS VARIÁVEIS DA CARTA B02 (ESTADO B);
// FOI USADO "B02" AO FINAL DO NOME DA VARÍAVEL PARA FACILITAR A IDENTIFICAÇÃO;
// EX: ESTADO+b02;






}
