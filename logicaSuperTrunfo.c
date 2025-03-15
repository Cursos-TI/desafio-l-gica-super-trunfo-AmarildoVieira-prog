#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main(){
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
printf("DESAFIO SUPER TRUNFO\n");
printf("COMPARAÇÃO DAS CARTAS\n");
    
int população,ponto;
float area,pib;
char estado,codigo,cidade;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

printf("Digite o nome do estado:\n");
scanf("%s",estado);

printf("Digite o código da carta:\n");
scanf("%s",codigo);

printf("Digite o nome da cidade:\n");
scanf("%s",cidade);

printf("Digite a poopulação:\n");
scanf("%d",&populacão);

printf("Digite a área:\n");
scanf("%f",&area);

printf("Digite o pib:\n");
scanf("%f",&pib);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d",&ponto);



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
