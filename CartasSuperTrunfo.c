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

 
// Definição de variáveis do (estado-carta A01);
char estado;
char codigo[20];
char nomedacidade[20];
int populacao;
float area;
float pib;
int pontosturisticos;

//titulo de apresentação;
printf("Bem vindo ao Desafio Super Trunfo\n\n");

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
printf("Estado: %c\n", estado);
printf("Código da cidade: %s\n", codigo);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("Área: %f km²\n", area);
printf("Pib: %f\n", pib);
printf("Pontos turísticos: %d\n", pontosturisticos);
printf("\n\n\n");

//inicio da carta A02 (estado A);

// Variaveis da carta A02 (estado A);
//foi adicionado "a02" a frente das variaveis para facilitar a identificacão;
char estadoa02;
char codigoa02[20];
char nomedacidadea02[20];
int populacaoa02;
float areaa02;
float piba02;
int pontosturisticosa02;

//introdução de titúlo da carta A02;
printf("Carta A02\n\n");
printf("Nos campos abaixo informe as informações da carta A02\n\n");

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
printf("Estado: %c\n", estadoa02);
printf("Código da cidade: %s\n", codigoa02);
printf("Nome da cidade: %s\n", nomedacidadea02);
printf("População: %d\n", populacaoa02);
printf("Área: %f km²\n", areaa02);
printf("Pib: %f\n", piba02);
printf("Pontos turísticos: %d\n", pontosturisticosa02);





}
