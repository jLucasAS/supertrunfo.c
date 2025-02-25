#include <stdio.h>
    int main(){

        char estadoA[3], estadoB[3];
        char codigoA[5], codigoB[5];
        char nomedacidadeA[20], nomedacidadeB[20];
        float pib1, pib2, populacao1, populacao2;
        int pontosturisticos1, pontosturisticos2;

        //Cadastro da carta numero 1.
        printf("insira o codigo da carta 1: \n");
        scanf("%s", codigoA);
        
        printf("insira o nome da cidade: \n");
        scanf("%s", nomedacidadeA);
        
        printf("insira o estado: \n");
        scanf("%s", estadoA);
       
        printf("insira a população: \n ");
        scanf("%f", &populacao1);
        
        printf("insira o PIB: \n");
        scanf("%f", &pib1);
        
        printf("insira o numero de pontos turisticos: \n");
        scanf("%d", &pontosturisticos1);

        // cadastro da carta numero 2
        
        printf("insira o codigo da carta 2: \n");
        scanf("%s", codigoB);

        printf("insira o nome da cidade: \n");
        scanf("%s", nomedacidadeB);

        printf("Insira o estado: \n");
        scanf("%s", estadoB);

        printf("insira o numero da população: \n");
        scanf("%f", &populacao2);

        printf("insira o Pib: \n");
        scanf("%f", &pib2);

        printf("insira o numero de pontos turisticos: \n");
        scanf("%d", &pontosturisticos2);

        //Exibição das informaçoes das cartas 1 e 2.

        printf("codigo da carta 1: %s \n", codigoA);
        printf("nome da cidade: %s \n", nomedacidadeA);
        printf("Estado: %s \n", estadoA);
        printf("Populacao: %.3f \n", populacao1);
        printf("Pib: %.3f \n", pib1);
        printf("Pontos Turisticos: %d \n", pontosturisticos1);

        printf("Codigo da carta 2: %s \n", codigoB);
        printf("Nome da cidade: %s \n", nomedacidadeB);
        printf("Estado: %s \n", estadoB);
        printf("Populaçao: %.3f \n", populacao2);
        printf("Pib: %.3f \n", pib2);
        printf("Pontos turisticos: %d", pontosturisticos2);


        return 0;
    }