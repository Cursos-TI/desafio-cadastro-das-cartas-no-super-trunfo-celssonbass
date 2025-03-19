#include <stdio.h>


int main() {
     // DEFININDO AS VARIAVEL PARA A CARTA 1
    char estado1; // VARIAVEL QUE ARMAZENA O ESTADO 1
    char codigoDaCarta1[3]; // VARIAVEL QUE ARMAZENARA O CÓDIGO DA CARTA 1
    char nomeDaCidade1[30]; // VARIAVEL QUE ARMAZENA O NOME DA CIDADE 1
    int populacao1; // VARIAVEL QUE ARMAZENA A POPULAÇÃO 1
    float area1; // VARIAVEL QUE ARMAZENA A ÁREA 1
    float pib1; // VARIAVEL QUE ARMAZENA O PIB 1
    int pontosTuristicos1;// VARIAVEL QUE ARMAZENA OS PONTOS TURISTICOS 1
    float densidadePopulacional1; // VARIAVEL QUE ARMAZENA A DENSIDADE POPULACIONAL 1
    float pibPerCapta1; // VARIAVEL QUE ARMAZENA O PIB PER CAPITA 1
    float SuperPoder1; // VARIAVEL QUE ARMAZENA SUPER PODER DA CARTA 1

     // DEFININDO AS VARIAVEL PARA A CARTA 2
     char estado2; // VARIAVEL QUE ARMAZENA O ESTADO 2
     char codigoDaCarta2[3]; // VARIAVEL QUE ARMAZENARA O CÓDIGO DA CARTA 2
     char nomeDaCidade2[30]; // VARIAVEL QUE ARMAZENA O NOME DA CIDADE 2
     int populacao2; // VARIAVEL QUE ARMAZENA A POPULAÇÃO 2
     float area2; // VARIAVEL QUE ARMAZENA A ÁREA 2
     float pib2; // VARIAVEL QUE ARMAZENA O PIB 2
     int pontosTuristicos2;// VARIAVEL QUE ARMAZENA OS PONTOS TURISTICOS 2
     float densidadePopulacional2; // VARIAVEL QUE ARMAZENA A DENSIDADE POPULACIONAL 2
     float pibPerCapta2; // VARIAVEL QUE ARMAZENA O PIB PER CAPITA 2
     float SuperPoder2; // VARIAVEL QUE ARMAZENA SUPER PODER DA CARTA 1

    // EXIBE UMA MENSAGEM DE BOAS VINDAS AO JOGO
    printf("Olá, seja bem vindo ao Super Trunfo em C\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    //EXIBE A MENSAGEM PARA CADASTRAR AS CARTAS
    printf("Primeiro vamos cadastrar as cartas\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O ESTADO DA CARTA 1
    printf("Por favor, digite o estado\n");

    // FUNCAO QUE VAI RECEBER O ESTADO DA CARTA 1 E ARMAZENAR NA VARIAVEL estado1
    scanf("%c", &estado1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O CÓDIGO DA CARTA 1
    printf("Digite o código da carta\n");
    
    // FUNCAO QUE VAI RECEBER O CÓDIGO DA CARTA 1 E ARMAZENAR NA VARIAVEL codigoCarta1
    scanf("%s", &codigoDaCarta1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O NOME DA CIDADE DA CARTA 1
    printf("Digite o nome da cidade\n");

    // FUNCAO QUE VAI RECEBER O NOME DA CIDADE DA CARTA 1 E ARMAZENAR NA VARIAVEL nomeCidade1
    scanf("%s", &nomeDaCidade1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A POPULAÇÃO DA CARTA 1
    printf("Digite a população\n");

    // FUNCAO QUE VAI RECEBER POPULAÇÃO DA CARTA 1 E ARMAZENAR NA VARIAVEL populacao1
    scanf("%d", &populacao1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A ÁREA DA CARTA 1
    printf("Digite a área\n");

    // FUNCAO QUE VAI RECEBER A ÁREA DA CARTA 1 E ARMAZENAR NA VARIAVEL area1
    scanf("%f", &area1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O PIB DA CARTA 1
    printf("Digite o PIB\n");

    // FUNCAO QUE VAI RECEBER O PIB DA CARTA 1 E ARMAZENAR NA VARIAVEL pib1
    scanf("%f", &pib1);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR o NÚMERO DE PONTOS TURISTICOS DA CARTA 1
    printf("Digite o numero de pontos turisticos\n");

    // FUNCAO QUE VAI RECEBER O NUMERO DE PONTOS TURISTICOS DA CARTA 1 E ARMAZENAR NA VARIAVEL pontosTuristicos1
    scanf("%d", &pontosTuristicos1);

    //FUNÇÃO PARA CALCULAR A DENSIDADE POPULACIONAL DA CARTA 1
    densidadePopulacional1 = (float) populacao1 / area1;

    //FUNÇÃO PARA CALCULAR O PIB PER CAPTA
    pibPerCapta1 = (float) pib1 / populacao1;

   
    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM QUE A PRIMEIRA CARTA FOI CADASTRADA COM SUCESSO
    printf("Carta 1 cadastrada com sucesso!\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    //MOSTRANDO OS DADOS CADASTRADOS PARA A CARTA 1
    printf("Estado: %c\n", estado1); // EXIBE O ESTADO CADASTRADO
    printf("Código da Carta: %s\n", codigoDaCarta1); // EXIBE O CÓDIGO DA CARTA
    printf("Nome da Cidade: %s\n", nomeDaCidade1); // EXIBE O NOME DA CIDADE
    printf("População: %d habitantes\n", populacao1); // EXIBE A POPULAÇÃO
    printf("Área: %f Km²\n", area1); // EXIBE A ÁREA
    printf("PIB: %f bilhões de reais\n", pib1); // EXIBE O PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // EXIBE O NUMERO DE PONTOS TURISTICOS
    printf("Densidade Populacional: %f\n", densidadePopulacional1); // EXIBE DENSIDADE POPULACIONAL
    printf("PIB Per Capita: %f reais\n", pibPerCapta1); // EXIBE O PIB PER CAPTA
    
    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM PARA CADASTRAR A SEGUNDA CARTA
    printf("Agora vamos cadastrar a segunda Carta\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O ESTADO DA CARTA 2
    printf("Por favor, digite o estado \n");

    // FUNCAO QUE VAI RECEBER O ESTADO DA CARTA 2 E ARMAZENAR NA VARIAVEL estado2
    scanf("%c", &estado2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O CÓDIGO DA CARTA 2
    printf("Digite o código da carta\n");
    
    // FUNCAO QUE VAI RECEBER O CÓDIGO DA CARTA 2 E ARMAZENAR NA VARIAVEL codigoCarta2
    scanf("%s", &codigoDaCarta2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O NOME DA CIDADE DA CARTA 2
    printf("Digite o nome da cidade\n");

    // FUNCAO QUE VAI RECEBER O NOME DA CIDADE DA CARTA 2 E ARMAZENAR NA VARIAVEL nomeCidade2
    scanf("%s", &nomeDaCidade2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A POPULAÇÃO DA CARTA 2
    printf("Digite a população\n");

    // FUNCAO QUE VAI RECEBER POPULAÇÃO DA CARTA 2 E ARMAZENAR NA VARIAVEL populacao2
    scanf("%d", &populacao2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR A ÁREA DA CARTA 2
    printf("Digite a área\n");

    // FUNCAO QUE VAI RECEBER A ÁREA DA CARTA 2 E ARMAZENAR NA VARIAVEL area2
    scanf("%f", &area2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR O PIB DA CARTA 2
    printf("Digite o PIB\n");

    // FUNCAO QUE VAI RECEBER O PIB DA CARTA 2 E ARMAZENAR NA VARIAVEL pib2
    scanf("%f", &pib2);

    // EXIBE A MENSAGEM PARA O USUARIO DIGITAR o NÚMERO DE PONTOS TURISTICOS DA CARTA 2
    printf("Digite o numero de pontos turisticos\n");

    // FUNCAO QUE VAI RECEBER O NUMERO DE PONTOS TURISTICOS DA CARTA 2 E ARMAZENAR NA VARIAVEL pontosTuristicos2
    scanf("%d", &pontosTuristicos2);

    //FUNÇÃO PARA CALCULAR A DENSIDADE POPULACIONAL DA CARTA 2
    densidadePopulacional2 = (float) populacao2 / area2;

    //FUNÇÃO PARA CALCULAR O PIB PER CAPTA DA CARTA 2
    pibPerCapta2 = (float) pib2 / populacao2;

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM QUE A PRIMEIRA CARTA FOI CADASTRADA COM SUCESSO
    printf("Carta 2 cadastrada com sucesso!\n");

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    //MOSTRANDO OS DADOS CADASTRADOS PARA A CARTA 2
    printf("Estado: %c\n", estado2); // EXIBE O ESTADO CADASTRADO
    printf("Código da Carta: %s\n", codigoDaCarta2); // EXIBE O CÓDIGO DA CARTA
    printf("Nome da Cidade: %s\n", nomeDaCidade2); // EXIBE O NOME DA CIDADE
    printf("População: %d habitantes\n", populacao2); // EXIBE A POPULAÇÃO
    printf("Área: %f Km²\n", area1); // EXIBE A ÁREA
    printf("PIB: %f bilhões de reais\n", pib2); // EXIBE O PIB
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // EXIBE O NUMERO DE PONTOS TURISTICOS
    printf("Densidade Populacional: %f\n", densidadePopulacional2); // EXIBE DENSIDADE POPULACIONAL
    printf("PIB Per Capita: %f reais\n", pibPerCapta2); // EXIBE O PIB PER CAPTA
    
    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM COMPARAÇÃO DAS CARTAS
    printf("Comparação das Cartas (Atributo: População)\n");

    printf("Carta 1 - %s, (%s): %d\n", nomeDaCidade1, codigoDaCarta1, populacao1);
    printf("Carta 2 - %s, (%s): %d\n", nomeDaCidade2, codigoDaCarta2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeDaCidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", nomeDaCidade2);
    }
    
    return 0;
}
