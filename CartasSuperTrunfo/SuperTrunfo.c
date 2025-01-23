#include <stdio.h>

    // Desafio Super Trunfo - Países;

    int main(){

        //Declaração de Variáveis;

        char nome[100];
        int codigo;
        int populacao;
        float area;
        float pib;
        int pontos_turistico;

        //Cadastro;

        printf("\n");

        printf("CADASTRO DAS CARTAS \n");

        printf("\n");

        printf("Digite o nome da cidade e tecle ENTER! \n ");
        scanf("%s", &nome);

        printf("Digite o número do codigo da cidade e tecle ENTER! \n ");
        scanf("%d", &codigo);

        printf("Digite a população da cidade e tecle ENTER! \n ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade e tecle ENTER! \n ");
        scanf("%f", &area);

        printf("Digite o PIB e tecle ENTER! \n ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turisticos e tecle ENTER! \n ");
        scanf("%d", &pontos_turistico);

        printf("\n");

        //Exibição dos dados coletados;

        printf("DADOS COLETADOS \n");
        printf("Nome da cidade: %s \n", nome);
        printf("Codigo: %d \n", codigo);
        printf("População da cidade: %d \n", populacao);
        printf("Área da cidade: %.3f \n", area);
        printf("PIB da cidade: %.3f \n", pib);
        printf("Quantidade de pontos turisticos da cidade: %d \n", pontos_turistico);

        printf("\n");

        return 0;

    }