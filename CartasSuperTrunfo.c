#include <stdio.h>


int main() {
     // DEFININDO AS VARIAVEL
    char estado; // VARIAVEL QUE ARMAZENA O ESTADO
    char codigoDaCarta[3]; // VARIAVEL QUE ARMAZENARA O CÓDIGO DA CARTA
    char nomeDaCidade[30]; // VARIAVEL QUE ARMAZENA O NOME DA CIDADE
    int populacao; // VARIAVEL QUE ARMAZENA A POPULAÇÃO
    float area; // VARIAVEL QUE ARMAZENA A ÁREA
    float pib; // VARIAVEL QUE ARMAZENA O PIB
    int pontosTuristicos;// VARIAVEL QUE ARMAZENA OS PONTOS TURISTICOS

    // EXIBE UMA MENSAGEM DE BOAS VINDAS AO JOGO
    printf("Olá, seja bem vindo ao Super Trunfo em C\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    //EXIBE A MENSAGEM PARA CADASTRAR AS CARTAS
    printf("Primeiro vamos cadastrar as cartas\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");


    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O ESTADO
    printf("Por favor, digite o estado\n");
    // FUNCAO QUE VAI RECEBER O ESTADO E ARMAZENAR NA VARIAVEL estado
    scanf("%c", &estado);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O CÓDIGO DA CARTA
    printf("Digite o código da carta\n");
    // FUNCAO QUE VAI RECEBER O CÓDIGO E ARMAZENAR NA VARIAVEL codigoCarta
    scanf("%s", &codigoDaCarta);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O NOME DA CIDADE
    printf("Digite o nome da cidade\n");
    // FUNCAO QUE VAI RECEBER O NOME DA CIDADE ARMAZENAR NA VARIAVEL nomeCidade
    scanf("%s", &nomeDaCidade);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A POPULAÇÃO
    printf("Digite a população\n");
    // FUNCAO QUE VAI RECEBER POPULAÇÃO ARMAZENAR NA VARIAVEL populacao
    scanf("%d", &populacao);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A ÁREA
    printf("Digite a área\n");
    // FUNCAO QUE VAI RECEBER A ÁREA ARMAZENAR NA VARIAVEL area
    scanf("%f", &area);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O PIB
    printf("Digite o PIB\n");
    // FUNCAO QUE VAI RECEBER O PIB E ARMAZENAR NA VARIAVEL pib
    scanf("%f", &pib);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR o NÚMERO DE PONTOS TURISTICOS
    printf("Digite o numero de pontos turisticos\n");
    // FUNCAO QUE VAI RECEBER O NUMERO DE PONTOS TURISTICOS E ARMAZENAR NA VARIAVEL pontosTuristicos
    scanf("%d", &pontosTuristicos);

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM QUE A CARTA FOI CADASTRADA COM SUCESSO
    printf("Carta cadastrada com sucesso!\n");

    //MOSTRANDO OS DADOS CADASTRADOS
    printf("Estado: %c\n", estado); // EXIBE O ESTADO CADASTRADO
    printf("Código da Carta: %s\n", codigoDaCarta); // EXIBE O CÓDIGO DA CARTA
    printf("Nome da Cidade: %s\n", nomeDaCidade); // EXIBE O NOME DA CIDADE
    printf("População: %d\n", populacao); // EXIBE A POPULAÇÃO
    printf("Área: %f Km²\n", area); // EXIBE A ÁREA
    printf("PIB: %f bilhões de reais\n", pib); // EXIBE O PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos); // EXIBE O NUMERO DE PONTOS TURISTICOS

    return 0;
}
