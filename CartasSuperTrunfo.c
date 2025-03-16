#include <stdio.h>


int main() {
     // DEFININDO AS VARIAVEL PARA A CARTA 1
    char estado1; // VARIAVEL QUE ARMAZENA O ESTADO 1
    char codigoDaCarta1[3]; // VARIAVEL QUE ARMAZENARA O CÓDIGO DA CARTA 1
    char nomeDaCidade1[30]; // VARIAVEL QUE ARMAZENA O NOME DA CIDADE 1
    unsigned long int populacao1; // VARIAVEL QUE ARMAZENA A POPULAÇÃO 1
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
     unsigned long int populacao2; // VARIAVEL QUE ARMAZENA A POPULAÇÃO 2
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

    //FUNÇÃO PARA CALCULAR O SUPER PODER DA CARTA 1
    SuperPoder1 = populacao1 + area1 + pib1 + pibPerCapta1 + (1/densidadePopulacional1) + pontosTuristicos1;

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
    printf("Super Poder: %f\n", SuperPoder1); // EXIBE O PIB PER CAPTA


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

    //FUNÇÃO PARA CALCULAR O SUPER PODER DA CARTA 2
    SuperPoder2 = populacao2 + area2 + pib2 + pibPerCapta2 + (1/densidadePopulacional2) + pontosTuristicos2;

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
    printf("Super Poder: %f\n", SuperPoder2); // EXIBE O PIB PER CAPTA

    //DEFINE UMA NOVA LINHA EM BRANCO
    printf("\n");

    // EXIBE A MENSAGEM COMPARAÇÃO DAS CARTAS
    printf("Comparação das Cartas\n");

    // COMPARA A POPULAÇÃO DAS DUAS CARTAS
    printf("População Carta 1: (%u)\n", populacao1);
    printf("População Carta 2: (%u)\n", populacao2);
    printf("População Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // COMPARA A ÁREA DAS DUAS CARTAS
    printf("Área Carta 1: (%f)\n", area1);
    printf("Área Carta 2: (%f)\n", area2);
    printf("Área Carta 1 venceu (%d)\n", area1 > area2);

    // COMPARA A PIB DAS DUAS CARTAS
    printf("PIB Carta 1: (%f)\n", pib1);
    printf("PIB Carta 2: (%f)\n", pib2);
    printf("PIB Carta 1 venceu (%d)\n", pib1 > pib2);

    // COMPARA OS PONTOS TURISTICOS DAS DUAS CARTAS
    printf("Pontos Turisticos Carta 1: (%d)\n", pontosTuristicos1);
    printf("Pontos Turisticos Carta 2: (%d)\n", pontosTuristicos2);
    printf("Pontos Turisticos Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // COMPARA A DENSIDADE POPULACIONAL DAS DUAS CARTAS
    printf("Densidade Populacional Carta 1: (%f)\n", densidadePopulacional1);
    printf("Densidade Populacional Carta 2: (%f)\n", densidadePopulacional2);
    printf("Densidade Populacional Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);

    // COMPARA O PIB PER CAPTA DAS DUAS CARTAS
    printf("PIB per Capita Carta 1: (%f)\n", pibPerCapta1);
    printf("PIB per Capita Carta 2: (%f)\n", pibPerCapta2);
    printf("PIB per Capita Carta 1 venceu (%d)\n", pibPerCapta1 > pibPerCapta2);

    // COMPARA SUPER PODER DAS DUAS CARTAS
    printf("Super Poder Carta 1: (%f)\n", SuperPoder1);
    printf("Super Poder Carta 2: (%f)\n", SuperPoder2);
    printf("Super Poder Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
 
    
    return 0;
}
