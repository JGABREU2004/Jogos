#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    /* iniciando o desafio do Super Trunfo
    criando menu interativo, compararação de cartas,
    regras do jogo e exibição de resultado   
    */ 
    
    // inserindo as váriaveis e atributos

    char estado1[4] = "BA";
    char estado2[4] = "CE";
    char cidade1[20] = "SALVADOR";
    char cidade2[20] = "FORTALEZA";  
    int codigo_carta1 = 1;
    int codigo_carta2 = 2;
    int populacao1 = 6000000;
    int populacao2 = 6500000;
    int pontos_turisticos1 = 50;
    int pontos_turisticos2 = 45;
    float area1 = 4500.00;
    float area2 = 4000.00;
    float pib1 = 6000000000.00;
    float pib2 = 5000000000.00;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int numero, atributo;

    // Calculando a densidade populacional, pib per capita e a carta Super Poder - Carta 1
    
    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    super_poder1 = (float) populacao1 + area1 + pib1 + pib_per_capita1 + (float) pontos_turisticos1;

    // Calculando a densidade populacional, pib per capita e a carta Super Poder - Carta 2

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    super_poder2 = (float) populacao2 + area2 + pib2 + pib_per_capita2 + (float) pontos_turisticos2;  

    // Menu Interativo - para inicio do jogo Super Trunfo

    printf("### Jogo do Super Trunfo ###\n");
    printf("** Iniciando o Jogo **\n");
    printf("1. Comparação de atributos\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do jogo\n");
    printf("Escolha a opção: ");
    scanf("%d", &numero);

switch (numero)
{
case 1: // Comparando as cartas
    printf("** Comparando as cartas **\n"); // digite o número do atriubuto para fazer a comparação
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Super Trunfo\n");
    printf("Escolha um atributo: ");
    scanf("%d", &atributo);

    switch (atributo) // comparando os atributos das cartas usando switch, if, else if e else
    {
        case 1: 
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** População **\n");
        printf("%d X %d \n", populacao1, populacao2);
            if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (populacao1 < populacao2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate!\n");
            }   
            break;
        case 2:
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** Área **\n");
        printf("%.2f X %.2f \n", area1, area2);
            if (area1 > area2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (area1 < area2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate\n");
            }
            break;
        case 3:
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** PIB **\n");
        printf("%.2f X %.2f \n", pib1, pib2);
            if (pib1 > pib2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (pib1 < pib2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate!\n");
            }   
            break;
        case 4:
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** Pontos Turísticos **\n");
        printf("%d X %d \n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (pontos_turisticos1 < pontos_turisticos2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate!\n");
            }   
            break;
        case 5:
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** Densidade Demográfica **\n");
        printf("%.2f X %.2f \n", densidade_populacional1, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (densidade_populacional1 > densidade_populacional2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate\n");
            }
            break;
        case 6:
        printf("Nome das cidades: %s X %s\n", cidade1, cidade2);
        printf("** Super Trunfo **\n");
        printf("%.2f X %.2f \n", super_poder1, super_poder2);
            if (super_poder1 > super_poder2) {
            printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
            }
            else if (super_poder1 < super_poder2) { 
            printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
            }
            else {
            printf("Empate!\n");
            }   
            break;

        default:
        printf("Atributo inválido! Escolha entre 1 e 6.\n");
        break;
    }
    break;
case 2: // regra do jogo
    printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    break;
case 3: // sair do jogo
    printf("Sair do jogo\n");
    break;
default: // Escolha um número de 1 a 3
    printf("Opção inválida!\n");
    break;
}          
    // finalizando o jogo Super Trunfo

    return 0;
}