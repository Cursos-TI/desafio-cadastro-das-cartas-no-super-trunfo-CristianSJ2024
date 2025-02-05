#include <stdio.h>

int main() {
    int codigo;
    char nome[100];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    
    printf("Cadastro da Cidade: \n");
    
    printf("Informe o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Informe o nome da cidade: ");
    scanf("%s", &nome);
    
    printf("Informe a população da cidade: ");
    scanf("%ld", &populacao);
    
    printf("Informe a área da cidade: ");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    printf("Dados da Cidade Cadastrada: \n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    
    return 0;
}