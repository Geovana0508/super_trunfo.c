#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1;           // Armazena a letra do estado da primeira carta
    char codigo1[5];        // Armazena o código da carta (ex: A01, B02, etc.)
    char cidade1[50];       // Armazena o nome da cidade da primeira carta
    int populacao1;         // Armazena a população da cidade
    float area1;            // Armazena a área da cidade em km²
    float pib1;             // Armazena o PIB da cidade em bilhões de reais
    int pontosTuristicos1;  // Armazena o número de pontos turísticos da cidade

    // Variáveis para armazenar os dados da segunda carta (Mesmo processo)
    char estado2;           // Armazena a letra do estado da segunda carta
    char codigo2[5];        
    char cidade2[50];      
    int populacao2;        
    float area2;           
    float pib2;            
    int pontosTuristicos2; 

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (letra que representa o Estado de A a H): ");
    scanf(" %c", &estado1);  // Lê a letra do estado (com espaço antes para ignorar quebras de linha)
    printf("Código da Carta (exemplo: A01): ");
    scanf("%s", codigo1);    // Lê o código da carta, que é uma string de 4 caracteres
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);  // Lê o nome da cidade
    printf("População: ");
    scanf("%d", &populacao1);    // Lê o número de habitantes da cidade
    printf("Área (em km²): ");
    scanf("%f", &area1);         // Lê a área da cidade em km²
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);          // Lê o PIB da cidade em bilhões de reais
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra que representa o Estado de A a H): ");
    scanf(" %c", &estado2);  
    printf("Código da Carta (exemplo: B03): ");
    scanf("%s", codigo2);    
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);  
    printf("População: ");
    scanf("%d", &populacao2);   
    printf("Área (em km²): ");
    scanf("%f", &area2);        
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);         
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); 

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);                      // Exibe o estado da primeira carta
    printf("Código: %s\n", codigo1);                      // Exibe o código da primeira carta
    printf("Nome da Cidade: %s\n", cidade1);              // Exibe o nome da cidade da primeira carta
    printf("População: %d\n", populacao1);                // Exibe a população da primeira cidade
    printf("Área: %.2f km²\n", area1);                    // Exibe a área da primeira cidade
    printf("PIB: %.2f bilhões de reais\n", pib1);         // Exibe o PIB da primeira cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);                     
    printf("Código: %s\n", codigo2);                     
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);              
    printf("Área: %.2f km²\n", area2);                   
    printf("PIB: %.2f bilhões de reais\n", pib2);        
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;  // Finaliza o programa e retorna 0
}


