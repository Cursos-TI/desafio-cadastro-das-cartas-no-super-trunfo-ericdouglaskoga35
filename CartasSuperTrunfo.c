#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codCidade;
    char nomeCidade[30];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    int codCidade2;
    char nomeCidade2[30];
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade da carta 1: ");
    scanf("%d", &codCidade);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nomeCidade);

    printf("Digite o numero de habitantes da carta 1: ");
    scanf("%f", &populacao);

    printf("Digite a sua area em km² da carta 1: ");
    scanf("%f", &area);

    printf("Digite o seu Produto interno Bruto:  da carta 1");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: da carta 1");
    scanf("%d", &pontosTuristicos);
    
    printf("\n ================================================ \n");
    
    printf("Digite o codigo da cidade da carta 2: ");
    scanf("%d", &codCidade);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nomeCidade2);

    printf("Digite o numero de habitantes da carta 2: ");
    scanf("%f", &populacao2);

    printf("Digite a sua area em km² da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o seu Produto interno Bruto:  da carta 2");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: da carta 2");
    scanf("%d", &pontosTuristicos2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCodigo da cidade da carta 1: %d \n", codCidade);
    printf("\nNome da cidade:  da carta 1 %s \n", nomeCidade);
    printf("\nNumero de habitantes: da carta 1 %f \n", populacao);
    printf("\nExtensao territorial da carta 1: %.2F km² \n", area);
    printf("\nDigite o seu PIB da carta 1: %.2F \n", pib);
    printf("\nDigite o numero de pontos turisticos da carta 1: %d \n", pontosTuristicos);
    
    printf("\n ======================================================== \n");
    
    printf("\nCodigo da cidade da carta 2: %d \n", codCidade2);
    printf("\nNome da cidade:  da carta 2 %s \n", nomeCidade2);
    printf("\nNumero de habitantes: da carta 2 %f \n", populacao2);
    printf("\nExtensao territorial da carta 2: %.2F km² \n", area2);
    printf("\nDigite o seu PIB da carta 2: %.2F \n", pib2);
    printf("\nDigite o numero de pontos turisticos da carta 2: %d \n", pontosTuristicos2);

    return 0;
}
