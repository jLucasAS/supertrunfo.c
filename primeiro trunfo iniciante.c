#include <stdio.h>
    int main(){
        //Variaveis das cartas.
        char estadoA[3], estadoB[3];
        char codigoA[5], codigoB[5];
        char nomedacidadeA[20], nomedacidadeB[20];
        float pib1, pib2, populacao1, populacao2;
        int pontosturisticos1, pontosturisticos2;

        //Cadastro da carta numero 1.
        printf("insira o codigo da carta 1 (exemplo: C1):");
        scanf("%s", codigoA);
        getchar(); //limpeza do buffer.

        printf("insira o nome da cidade:");
        scanf("%s", nomedacidadeA);
        getchar();

        printf("insira a sigla do estado: (exemplo: DF):");
        scanf("%s", estadoA);
        getchar();

        printf("insira a população:");
        scanf("%f", &populacao1);
        getchar();

        printf("insira o PIB:");
        scanf("%f", &pib1);
        getchar();

        printf("insira o numero de pontos turisticos:");
        scanf("%d", &pontosturisticos1);

        // cadastro da carta numero 2
        
        printf("insira o codigo da carta 2:");
        scanf("%s", codigoB);

        printf("insira o nome da cidade:");
        scanf("%s", nomedacidadeB);

        printf("Insira o estado:");
        scanf("%s", estadoB);

        printf("insira o numero da população:");
        scanf("%f", &populacao2);

        printf("insira o Pib:");
        scanf("%f", &pib2);

        printf("insira o numero de pontos turisticos:");
        scanf("%d", &pontosturisticos2);

        //Exibição das informaçoes das cartas.
        //carta 1.
        printf("codigo da carta 1: %s \n", codigoA);
        printf("nome da cidade: %s \n", nomedacidadeA);
        printf("Estado: %s \n", estadoA);
        printf("Populacao: %.3f \n", populacao1);
        printf("Pib: %.3f \n", pib1);
        printf("Pontos Turisticos: %d \n", pontosturisticos1);

        //carta 2.
        printf("Codigo da carta 2: %s \n", codigoB);
        printf("Nome da cidade: %s \n", nomedacidadeB);
        printf("Estado: %s \n", estadoB);
        printf("Populaçao: %.3f \n", populacao2);
        printf("Pib: %.3f \n", pib2);
        printf("Pontos turisticos: %d", pontosturisticos2);


        return 0;
    }