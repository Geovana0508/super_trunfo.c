#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1;              // Armazena a letra do estado da primeira carta
    char codigo1[5];           // Armazena o código da carta (ex: A01, B02, etc.)
    char cidade1[50];          // Armazena o nome da cidade da primeira carta
    unsigned long int populacao1;  // Armazena a população da cidade (agora unsigned long int)
    float area1;               // Armazena a área da cidade em km²
    float pib1;                // Armazena o PIB da cidade em bilhões de reais
    int pontosTuristicos1;     // Armazena o número de pontos turísticos da cidade
    float densidadePop1;       // Densidade populacional da cidade
    float pibPerCapita1;       // PIB per capita da cidade
    float superPoder1;         // Super poder da primeira carta

    // Variáveis para armazenar os dados da segunda carta
    char estado2;              // Armazena a letra do estado da segunda carta
    char codigo2[5];          
    char cidade2[50];         
    unsigned long int populacao2;  // Armazena a população da cidade (agora unsigned long int)
    float area2;               
    float pib2;                
    int pontosTuristicos2;    
    float densidadePop2;       // Densidade populacional da cidade
    float pibPerCapita2;       // PIB per capita da cidade
    float superPoder2;         // Super poder da segunda carta

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (letra que representa o Estado de A a H): \n");
    scanf(" %c", &estado1);  
    printf("Código da Carta (exemplo: A01): \n");
    scanf("%s", codigo1);    
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade1);  
    printf("População: \n");
    scanf("%lu", &populacao1);    
    printf("Área (em km²): \n");
    scanf("%f", &area1);         
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);          
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1); 

    // Cálculo da Densidade Populacional e PIB per Capita para a primeira cidade
    densidadePop1 = populacao1 / area1;   
    pibPerCapita1 = pib1 * 1e9 / populacao1;

    // Cálculo do Super Poder da primeira carta
    superPoder1 = (float)(populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePop1));

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra que representa o Estado de A a H): ");
    scanf(" %c", &estado2);  
    printf("Código da Carta (exemplo: B03): ");
    scanf("%s", codigo2);    
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade2);  
    printf("População: \n");
    scanf("%lu", &populacao2);   
    printf("Área (em km²): \n");
    scanf("%f", &area2);        
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);         
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2); 

    // Cálculo da Densidade Populacional e PIB per Capita para a segunda cidade
    densidadePop2 = populacao2 / area2;   
    pibPerCapita2 = pib2 * 1e9 / populacao2;

    // Cálculo do Super Poder da segunda carta
    superPoder2 = (float)(populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePop2));

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);                      
    printf("Código: %s\n", codigo1);                     
    printf("Nome da Cidade: %s\n", cidade1);              
    printf("População: %lu\n", populacao1);               
    printf("Área: %.2f km²\n", area1);                    
    printf("PIB: %.2f bilhões de reais\n", pib1);         
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1); 
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); 
    printf("Super Poder: %.2f\n", superPoder1); 

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);                       
    printf("Código: %s\n", codigo2);                      
    printf("Nome da Cidade: %s\n", cidade2);              
    printf("População: %lu\n", populacao2);               
    printf("Área: %.2f km²\n", area2);                    
    printf("PIB: %.2f bilhões de reais\n", pib2);         
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2); 
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); 
    printf("Super Poder: %.2f\n", superPoder2); 

    // Comparação de atributos e exibição do resultado
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    // Comparação de Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePop1 < densidadePop2);
    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;  // Finaliza o programa e retorna 0
}
