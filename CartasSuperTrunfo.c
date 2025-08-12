#include <stdio.h>

    struct carta{
        char estado [3];
        char codigo[10];
        char nomeCidade[100];
        int população;
        float PIB;
        int PontosTuristicos;
    };

int main () {

        struct carta carta1;
        struct carta carta2;

        printf("Cadastro de Cartas Super Trunfo\n");
        printf("-------------------------------\n");

       printf("\nCarta 1:\n");

        printf("Informe o estado (letra de A a H): ");
        scanf(" %c", &carta1.estado); 

        printf("Informe o codigo (ex: A01):");
        scanf("%s",&carta1.codigo); 

        printf("Informe sua Cidade (ex: Rj): ");
        scanf("%s",&carta1.nomeCidade);

        printf("Informe a população: ");
        scanf("%f",&carta1.população);

        printf("Informe a PIB (em bilhões de reais): ");
        scanf("%f",&carta1.PIB);

        printf("Quantos pontos turisticos?: ");
        scanf("%d",&carta1.PontosTuristicos);

        printf("\nCarta 2\n");

        printf("Informe o estado (letra de A a H): ");
        scanf("%s", &carta2.estado);

        printf("Informe o codigo (ex: A01): ");
        scanf("%s", &carta2.codigo);
    
        printf("Informe o Nome da Cidade: ");
        scanf(" %[^\n]", carta2.nomeCidade);

        printf("Informe a população: ");
        scanf("%d", &carta2.população);

        printf("Informe a PIB (em bilhões de reais): ");
        scanf("%f", &carta2.PIB);

        printf("Quantos pontos Turísticos?: " );
        scanf("%d", &carta2.PontosTuristicos);

        printf("\n-----------------------------\n");
        printf("Informação das cartas cadastradas\n");
        printf("\n-----------------------------\n");

        printf("\nCarta 1:\n");
        printf("Estado: %c\n", carta1.estado);
        printf("Código: %s\n", carta1.codigo);
        printf("Nome da Cidade: %s\n", carta1.nomeCidade);
        printf("População: %d\n", carta1.população);
        printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
        printf("Número de Pontos Turísticos: %d\n", carta1.PontosTuristicos);

        printf("\nCarta 2:\n");
        printf("Estado: %c\n", carta2.estado);
        printf("Código: %s\n", carta2.codigo);
        printf("Nome da Cidade: %s\n", carta2.nomeCidade);
        printf("População: %d\n", carta2.população);
        printf("PIB: %.2f bilhões de reais\n", carta2.PIB); 
        printf("Número de Pontos Turísticos: %d\n", carta2.PontosTuristicos);

    return 0;
}
