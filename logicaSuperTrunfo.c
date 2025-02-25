//Código para Cartas Super-Trunfo.

#include <stdio.h>

int main() {

//Variáveis da 1ª Carta.

    int pontost1;
    unsigned long int populacao1;
    float area1, pib1, dp1, pibp1, superp1, indp1;
    char pais1[30], estado1[20], cidade1[20], codigo1[20];

//Variáveis da 2ª Carta.

    int pontost2;
    unsigned long int populacao2;
    float area2, pib2, dp2, pibp2, superp2, indp2;
    char pais2[30], estado2[20], cidade2[20], codigo2[20];

//Cadastro 1ª Carta.

    printf("CADASTRO SUPER TRUNFO\n\n");
    printf("1ª - Carta\n\n");


// Cadastro das informações dos Países, Estados e Cidades.
// Leitura de dados informados da 1ª Carta.

    printf("Digite o Nome do País:\n");
    scanf("%s", &pais1);

    printf("Digite o Nome do Estado:\n");
    scanf("%s", &estado1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite o Código da Cidade:\n");
    scanf("%s", &codigo1);

    printf("Digite a População do Cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turisticos da Cidade:\n");
    scanf("%d", &pontost1);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area1);


// Exibição dos valores cadastrados.

    printf("Cartas Super-Trunfo\n\n");
    printf("1ª - Carta:\n\n");

//Váriaveis tipo CHAR.

    printf("Nome do País: %s\n", pais1);
    printf("Nome do Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Código da Cidade: %s\n", codigo1);

//Váriaveis do tipo INT.

    printf("População: %d habitantes\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontost1);

//Operações com valores fornecidos.

    dp1 = (float) populacao1 / area1;
    pibp1 = pib1 / (float) populacao1;

    printf("Densidade Populacional: %.3f hab/km²\n", dp1);
    printf("PIB Per Capita: %.10f Reais\n", pibp1);

//Cálculo do Super Poder - 1ª Carta.

    indp1 = (float) 1 / dp1;
    superp1 = area1 + pib1 + pibp1 + indp1 + (float) populacao1 + (float) pontost1;

//Váriaveis do tipo FLOAT.

    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f Reais\n", pib1);
    printf("Super Poder: %.3f Pontos\n", superp1);

//------------------------------------------------------------ 
    
//Cadastro 2ª Carta.

    printf("CADASTRO SUPER TRUNFO\n\n");
    printf("2ª - Carta\n\n");


// Cadastro das informações dos Países, Estados e Cidades.
// Leitura de dados informados da 2ª Carta.

    printf("Digite o Nome do País:\n");
    scanf("%s", &pais2);

    printf("Digite o Nome do Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite o Código da Cidade:\n");
    scanf("%s", &codigo2);

    printf("Digite a População do Cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turisticos da Cidade:\n");
    scanf("%d", &pontost2);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area2);

// Exibição dos valores cadastrados.

    printf("Cartas Super-Trunfo\n\n");
    printf("2ª - Carta:\n\n");

//Váriaveis tipo CHAR.

    printf("Nome do País: %s\n", pais2);
    printf("Nome do Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Código da Cidade: %s\n", codigo2);

//Váriaveis do tipo INT.

    printf("População: %d habitantes\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontost2);

//Operações com valores fornecidos.

    dp2 = (float) populacao2 / area2;
    pibp2 = pib2 / (float) populacao2;

    printf("Densidade Populacional: %.3f hab/km²\n", dp2);
    printf("PIB Per Capita: %.10f Reais\n", pibp2);

//Cálculo do Super Poder - 2ª Carta.

    indp2 = (float) 1 / dp2;
    superp2 = area2 + pib2 + pibp2 + indp2 + (float) populacao2 + (float) pontost2;

//Váriaveis do tipo FLOAT.

    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f Reais\n", pib2);
    printf("Super Poder: %.3f Pontos\n", superp2);

//Comparações entre as cartas 1 e 2.

    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s: %d\n", estado1, populacao1);
    printf("Carta 2 - %s: %d\n", estado2, populacao2);


    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 - %s Venceu!\n", estado1);
    }else{
        printf("Resultado: Carta 2 - %s Venceu!\n", estado2);

    }

    
    return 0;
}
