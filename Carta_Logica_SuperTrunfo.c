#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main(){

    /* iniciando o desafio do Super Trunfo
    criando menu interativo, compararação de cartas,
    regras do jogo e exibição de resultado   
    */ 
    
// inserindo as váriaveis e atributos e o cadatro das Cartas

char estado1[4] = "BA";
char estado2[4] = "CE";
char cidade1[20] = "SALVADOR";
char cidade2[20] = "FORTALEZA";  
int codigo_carta1 = 1;
int codigo_carta2 = 2;
int populacao1 = 6000000;
int populacao2 = 5000000;
int pontos_turisticos1 = 50;
int pontos_turisticos2 = 45;
float area1 = 4500.00;
float area2 = 5000.00;
float pib1 = 6000000000.00;
float pib2 = 7000000000.00;
float densidade_populacional1, densidade_populacional2;
float pib_per_capita1, pib_per_capita2;
float super_poder1, super_poder2;
int numero, atributo1, atributo2;
int resultado1, resultado2;

// Calculando a densidade populacional, pib per capita e a carta Super Poder - Carta 1
    
    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    super_poder1 = (float) populacao1 + area1 + pib1 + pib_per_capita1 + (float) pontos_turisticos1;

// Calculando a densidade populacional, pib per capita e a carta Super Poder - Carta 2

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    super_poder2 = (float) populacao2 + area2 + pib2 + pib_per_capita2 + (float) pontos_turisticos2;  

// Menu Interativo - para inicio do jogo Super Trunfo

printf("\n### Jogo do Super Trunfo ###\n");
printf("\n** Iniciando o Jogo **\n");
printf("1. Comparação de atributos\n");
printf("2. Regras do jogo\n");
printf("3. Sair do jogo\n");
printf("Escolha a opção: ");
scanf("%d", &numero);

switch (numero)
{
case 1: // Comparando as cartas
    printf("\n** Comparando as cartas do 1o. Atributo **\n"); // digite o número do atriubuto para fazer a comparação
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Pib per capita\n");
    printf("7. Super Trunfo\n");
    printf("Escolha um atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1) // comparando os atributos das cartas usando switch, if, else if e else
    {
    case 1: 
        printf("** População **\n");
        printf("%d X %d \n", populacao1, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
        printf("** Área **\n");
        printf("%.2f X %.2f \n", area1, area2);
        resultado1 = area1 > area2 ? 1 : 0;
    break;
    case 3:
        printf("** PIB **\n");
        printf("%.2f X %.2f \n", pib1, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
    break;
    case 4:
        printf("** Pontos Turísticos **\n");
        printf("%d X %d \n", pontos_turisticos1, pontos_turisticos2);
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
        printf("** Densidade Demográfica **\n");
        printf("%.2f X %.2f \n", densidade_populacional1, densidade_populacional2);
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;
    case 6:
        printf("** PIB per capita **\n");
        printf("%.2f X %.2f \n", pib_per_capita1, pib_per_capita2);
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    break;
    case 7:
        printf("** Super Trunfo **\n");
        printf("%.2f X %.2f \n", super_poder1, super_poder2);
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
    break;
    default:
        printf("Atributo inválido! Escolha entre 1 e 7.\n");
    break;
    }
// digite o número do atriubuto para fazer a comparação

    printf("\n** Comparando as cartas do 2o. Atributo **\n"); 
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Pib per capita\n");
    printf("7. Super Trunfo\n");
    printf("Escolha um atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
    printf("Você escolheu o mesmo atributo.\n");
    } else {
        switch (atributo2) // comparando os atributos das cartas usando switch, if, else if e else
        {
        case 1:
            printf("** População **\n");
            printf("%d X %d \n", populacao1, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
            printf("** Área **\n");
            printf("%.2f X %.2f \n", area1, area2);
            resultado2 = area1 > area2 ? 1 : 0;
        break;
        case 3:
            printf("** PIB **\n");
            printf("%.2f X %.2f \n", pib1, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
            printf("** Pontos Turísticos **\n");
            printf("%d X %d \n", pontos_turisticos1, pontos_turisticos2);
            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
        case 5:
            printf("** Densidade Demográfica **\n");
            printf("%.2f X %.2f \n", densidade_populacional1, densidade_populacional2);
            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
        case 6:
            printf("** PIB per capita **\n");
            printf("%.2f X %.2f \n", pib_per_capita1, pib_per_capita2);
            resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
        case 7:
            printf("** Super Trunfo **\n");
            printf("%.2f X %.2f \n", super_poder1, super_poder2);
            resultado2 = super_poder1 > super_poder2 ? 1 : 0;
        break;
        default:
            printf("Atributo inválido! Escolha entre 1 e 7.\n");
        break;   
    }
}
        // Exibir resultado final

        printf("\n*** Resultado ***\n");
        printf("\nNome das cidades: %s X %s\n", cidade1, cidade2);

        // Verificação do 1o. atributo para comparação de vitória

        printf("Atributo 1 escolhido: ");

        if (atributo1 == 1) {
            printf("População -> %d x %d\n", populacao1, populacao2);
        }
        else if (atributo1 == 2) {
            printf("Área -> %.2f x %.2f\n", area1, area2);
        }
        else if (atributo1 == 3) {
            printf("PIB -> %.2f x %.2f\n", pib1, pib2);
        }
        else if (atributo1 == 4) {
            printf("Pontos Turísticos -> %d x %d\n", pontos_turisticos1, pontos_turisticos2);
        }
        else if (atributo1 == 5) {
            printf("Densidade Demográfica -> %.2f x %.2f\n", densidade_populacional1, densidade_populacional2);
        }
        else if (atributo1 == 6) {
            printf("PIB per capita -> %.2f x %.2f\n", pib_per_capita1, pib_per_capita2);
        }
        else if (atributo1 == 7) {
            printf("Super Trunfo -> %.2f x %.2f\n", super_poder1, super_poder2);
        }   
        else printf("Inválido\n"); {
            printf("Resultado Atributo 1: %s\n", resultado1 == 1 ? "Vitória" : "Derrota");
        }

        // Verificação do 2o atributo para comparação de vitória

        printf("Atributo 2 escolhido: ");
        if (atributo2 == 1) {
            printf("População -> %d x %d\n", populacao1, populacao2);
        }
        else if (atributo2 == 2) {
            printf("Área -> %.2f x %.2f\n", area1, area2);
        }
        else if (atributo2 == 3) {
            printf("PIB -> %.2f x %.2f\n", pib1, pib2);
        }
        else if (atributo2 == 4) {
            printf("Pontos Turísticos -> %d x %d\n", pontos_turisticos1, pontos_turisticos2);
        }
        else if (atributo2 == 5) {
            printf("Densidade Demográfica -> %.2f x %.2f\n", densidade_populacional1, densidade_populacional2);
        }
        else if (atributo2 == 6) {
            printf("PIB per capita -> %.2f x %.2f\n", pib_per_capita1, pib_per_capita2);
        }
        else if (atributo2 == 7) {
            printf("Super Trunfo -> %.2f x %.2f\n", super_poder1, super_poder2);
        }   
        else printf("Inválido\n"); {
            printf("Resultado Atributo 2: %s\n", resultado2 == 1 ? "Vitória" : "Derrota");
        }

// você ganhou
    if (resultado1 == 1 && resultado2 == 1) 
        {
            printf("Parabéns, você venceu o jogo!\n");
        } 
// você perdeu
        else if (resultado1 == 0 && resultado2 == 0) {
            printf("Infelizmente, você perdeu o jogo!\n"); 
        } 
// deu empate
        else {
            printf("Deu empate!\n"); 
        }    
break;
case 2: // regra do jogo
printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
break;
case 3: // sair do jogo
printf("Sair do jogo...\n");
break;
default: // Escolha um néumero de 1 a 3
printf("Opção inválida! - Escolha de 1 a 3\n");
break;
}          
// finalizando o jogo Super Trunfo

return 0;
}