#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    float populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int pontosturisticos, pontosturisticos2;
    char nome[80], nome2[80];



printf("Nome da 1 cidade:\n");
scanf("%s", &nome);
printf("Nome da 2 cidade:\n");
scanf("%s", &nome2);

printf("Insira a população da 1 cidade:\n");
scanf(" %f", &populacao);
printf("Insira a população da 2 cidade:\n");
scanf(" %f", &populacao2);

printf("Insira a área da 1 cidade:\n");
scanf(" %e", &area);
printf("Insira a área da 2 cidade:\n");
scanf(" %e", &area2);

printf("Insira o PIB da 1 cidade:\n");
scanf("%e", &pib);
printf("Insira o PIB da 2 cidade:\n");
scanf("%e", &pib2);

printf("Quantos pontos turisticos da 1 cidade?:\n");
scanf("%d", &pontosturisticos);
printf("Quantos pontos turisticos da 2 cidade?:\n");
scanf("%d", &pontosturisticos2);

printf("Nome da 1 cidade: %s\n", nome);
printf("População da 1 cidade: %f\n", populacao);
printf("Àrea da 1 cidade: %e\n", area);
printf("PIB da 1 cidade: %e\n", pib);
printf("Pontos turisticos da 1 cidade: %d\n", pontosturisticos);

printf("Nome da 2 cidade: %s\n", nome2);
printf("População da 2 cidade: %f\n", populacao2);
printf("Àrea da 2 cidade: %e\n", area2);
printf("PIB da 2 cidade: %e\n", pib2);
printf("Pontos turisticos da 2 cidade: %d\n", pontosturisticos2);

if (populacao > populacao2) {
    printf("%s Ganhou, pois tem a maior populacao", nome);
}   else {
    printf("%s Ganhou, pois tem a maior populacao", nome2);
}
  
  
    return 0;
}
