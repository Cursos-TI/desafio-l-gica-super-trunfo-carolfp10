#include <stdio.h>

int main() {

    float populacao, populacao2;
    double area, area2, densidade, pibpercapta;
    double pib, pib2, densidade2, pibpercapta2;
    int pontosturisticos, pontosturisticos2, opcao, atributo;
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


densidade= (double)(populacao / area);

 pibpercapta= (double)(pib / populacao);

 densidade2= (double)(populacao2 / area2);

 pibpercapta2= (double)(pib2 / populacao2);

printf("***Jogo Trunfo***\n");
printf("Escola a opção desejada.\n");
printf("1.Iniciar jogo.\n");
printf("2. Regras.\n");
printf("3. Sair do jogo.\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
printf("***Qual atributo deseja usar para comparação:***\n");
printf("1. População\n");
printf("2.Area\n");
printf("3.Pib\n");
printf("4.Numero de pontos turisticos\n");
printf("5.Densidade\n");
scanf("%d", &atributo);

switch (atributo)
{
    case 1:
    printf("Cidade %s vs Cidade %s \n", nome, nome2);
    printf("População de %f vs População de %f \n", populacao, populacao2);
    if (populacao > populacao2){
    printf("Cidade %s venceu!\n", nome);
    }else if (populacao2 > populacao){
    printf("Cidade %s venceu!\n", nome2);
    }else if (populacao == populacao2){
        printf("Deu empate");
    }
    break;
    case 2:
    printf("Cidade %s vs Cidade %s \n", nome, nome2);
    printf("Area de %e vs Area de %e \n", area, area2);
    if (area > area2){
    printf("Cidade %s venceu!\n", nome);
    }else if (area2 > area){
    printf("Cidade %s venceu!\n", nome2);
    }else if (area == area2){
        printf("Deu empate");
    }
    break;
    case 3:
    printf("Cidade %s vs Cidade %s \n", nome, nome2);
    printf("Pib de %e vs Pib de %e \n", pib, pib2);
    if (pib > pib2){
    printf("Cidade %s venceu!\n", nome);
    }else if (pib2 > pib){
    printf("Cidade %s venceu!\n", nome2);
    }else if (pib == pib2){
        printf("Deu empate");
    }
    break;
    case 4:
    printf("Cidade %s vs Cidade %s \n", nome, nome2);
    printf("Ponto turistico de %d vs Ponto turistico de %d \n", pontosturisticos, pontosturisticos2);
    if (pontosturisticos > pontosturisticos2){
    printf("Cidade %s venceu!\n", nome);
    }else if (pontosturisticos2 > pontosturisticos){
    printf("Cidade %s venceu!\n", nome2);
    }else if (pontosturisticos == pontosturisticos2){
        printf("Deu empate");
    }
    break;
    case 5:
    printf("Cidade %s vs Cidade %s \n", nome, nome2);
    printf("Densidade de %e vs Densidade de %e \n", densidade, densidade2);
    if (densidade > densidade2){
    printf("Cidade %s venceu!\n", nome2);
    }else if (densidade2 > densidade){
    printf("Cidade %s venceu!\n", nome);
    }else if (densidade == densidade2){
        printf("Deu empate");
    }
}
break;
case 2:
printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.");
printf("Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
break;
case 3:
printf("Saindo...\n");
break;
default:
printf("Opção inválida.");
}
    return 0;
}
