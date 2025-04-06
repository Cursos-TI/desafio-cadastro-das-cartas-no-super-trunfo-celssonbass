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

     // EXIBE UMA MENSAGEM DE BOAS VINDAS AO JOGO
    printf("Olá, seja bem vindo ao Super Trunfo em C\n");
    printf("Primeiro vamos cadastrar as cartas\n");

    // INICIA O CADASTRO DA CARTA 1

    // ESTADO CARTA 1
    printf("Por favor, digite o estado\n");
    scanf(" %c", &estado1);

    // CÓDIGO CARTA 1
    printf("Digite o código da carta\n");
    scanf("%s", &codigoDaCarta1);

    // CIDADE CARTA 1
    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeDaCidade1);

    // POPULAÇÃO CARTA 1
    printf("Digite a população\n");
    scanf("%d", &populacao1);

    // ÁREA CARTA 1
    printf("Digite a área\n");
    scanf("%f", &area1);

    // PIB CARTA 1
    printf("Digite o PIB\n");
    scanf("%f", &pib1);

    // PONTOS TURISTICOS CARTA 1
    printf("Digite o numero de pontos turisticos\n");
    scanf("%d", &pontosTuristicos1);

    //DENSIDADE POPULACIONAL CARTA 1 (Calculada automaticamente pelo sistema)
    densidadePopulacional1 = (float) populacao1 / area1;

    //PIB PER CAPITA CARTA 1 (Calculada automaticamente pelo sistema)
    pibPerCapta1 = (float) pib1 / populacao1;

    //MENSAGEM QUE A CARTA 1 FOI CADASTRADA
    printf("Carta 1 cadastrada com sucesso!\n");

    //EXIBE OS DADOS DA CARTA 1
    printf("Estado: %c\n", estado1); 
    printf("Código da Carta: %s\n", codigoDaCarta1); 
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f\n", densidadePopulacional1);
    printf("PIB Per Capita: %f reais\n", pibPerCapta1);
    
    
    // INICIA O CADASTRO DA SEGUNDA CARTA
    printf("Agora vamos cadastrar a segunda Carta\n");

    // ESTADO CARTA 2
    printf("Por favor, digite o estado \n");
    scanf(" %c", &estado2);

    // CÓDIGO CARTA 2
    printf("Digite o código da carta\n");
    scanf("%s", &codigoDaCarta2);

    // CIDADE CARTA 2
    printf("Digite o nome da cidade\n");
    scanf("%s", &nomeDaCidade2);

    // POPULAÇÃO
    printf("Digite a população\n");
    scanf("%d", &populacao2);

    // ÁREA CARTA 2
    printf("Digite a área\n");
    scanf("%f", &area2);

    // PIB CARTA 2
    printf("Digite o PIB\n");
    scanf("%f", &pib2);

    // PONTOS TURISTICOS CARTA 2
    printf("Digite o numero de pontos turisticos\n");
    scanf("%d", &pontosTuristicos2);

    //DENSIDADE POPULACIONAL CARTA 2 (Calculada automaticamente pelo sistema)
    densidadePopulacional2 = (float) populacao2 / area2;

    //PIB PER CAPITA CARTA 2 (Calculada automaticamente pelo sistema)
    pibPerCapta2 = (float) pib2 / populacao2;

    //MENSAGEM QUE A CARTA 2 FOI CADASTRADA
    printf("Carta 2 cadastrada com sucesso!\n");

    //EXIBE OS DADOS DA CARTA 2
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f\n", densidadePopulacional2);
    printf("PIB Per Capita: %f reais\n", pibPerCapta2);

    //DEFININDO VARIÁVEIS DE CONTROLE
    int atributo1;
    int atributo2;
    
    //MENU PARA ESCOLHER O PRIMEIRO ATRIBUTO A SER COMPARADO
    printf("Por favor esccolha o primeiro atributo para comparação:\n");

    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Pontos Turísticos\n");
    printf("[5] Densidade Populacional\n");
    printf("[6] PIB Per Capita\n");

    scanf("%d", &atributo1);

    // SE A OPÇÃO ESCOLHIDA PARA O ATRIBUTO 1 FOR VÁLIDA
    if(atributo1 > 0 && atributo1 <= 6){

        printf("Muito bom! Agora escolha o segundo atributo\n");
        if(atributo1 != 1){printf("[1] População\n");}
        if(atributo1 != 2){printf("[2] Área\n");}
        if(atributo1 != 3){printf("[3] PIB\n");}
        if(atributo1 != 4){printf("[4] Pontos Turísticos\n");}
        if(atributo1 != 5){printf("[5] Densidade Populacional\n");}
        if(atributo1 != 6){printf("[6] PIB Per Capita\n");}

        scanf("%d", &atributo2);

        if(atributo2 > 0 && atributo2 <= 6 && atributo2 != atributo1){
            // SE A OPÇÃO ESCOLHIDA PARA O ATRIBUTO 2 FOR VÁLIDA
            printf("Muito bom! Agora vamos às comparações\n");

            //COMPARAÇÕES PARA O PRIMEIRO ATRIBUTO ESCOLHIDO
            switch (atributo1)
            {
            case 1:
                printf("Comparando População...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUA POPULAÇÃO
                printf("%s: %d - %s: %d\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);
                

                if(populacao1 > populacao2){
                    printf("A carta 1 (%s) venceu com a maior população!\n", nomeDaCidade1);
                }else if(populacao1 < populacao2){
                    printf("A carta 2 (%s) venceu com a maior população!\n", nomeDaCidade2);
                }else{
                    // SE AS POPULAÇÕES FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma população!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;
                
            case 2:
                printf("Comparando Área...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUAS ÁREAS
                printf("%s: %f - %s: %f\n", nomeDaCidade1, area1, nomeDaCidade2, area2);                

                if(area1 > area2){
                    printf("A carta 1 (%s) venceu com a maior área!\n", nomeDaCidade1);
                }else if(area1 < area2){
                    printf("A carta 2 (%s) venceu com a maior área!\n", nomeDaCidade2);
                }else{
                    // SE AS ÁREAS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma área!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 3:
                printf("Comparando PIB...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PIBs
                printf("%s: %f - %s: %f\n", nomeDaCidade1, pib1, nomeDaCidade2, pib2);                

                if(pib1 > pib2){
                    printf("A carta 1 (%s) venceu com o maior PIB!\n", nomeDaCidade1);
                }else if(pib1 < pib2){
                    printf("A carta 2 (%s) venceu com o maior PIB!\n", nomeDaCidade2);
                }else{
                    // SE OS PIBs FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo PIB!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 4:
                printf("Comparando Pontos Turísticos...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PONTOS TURISTICOS
                printf("%s: %d - %s: %d\n", nomeDaCidade1, pontosTuristicos1, nomeDaCidade2, pontosTuristicos2);                

                if(pontosTuristicos1 > pontosTuristicos2){
                    printf("A carta 1 (%s) venceu com o maior número de Pontos Turísticos!\n", nomeDaCidade1);
                }else if(pontosTuristicos1 < pontosTuristicos2){
                    printf("A carta 2 (%s) venceu com o maior número de Pontos Turísticos!\n", nomeDaCidade2);
                }else{
                    // SE OS PONTOS TURISTICOS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo número de Pontos Turísticos!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 5:
                printf("Comparando Densidade Populacional...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUAS DENSIDADES POPULACIONAIS
                printf("%s: %f - %s: %f\n", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2);                

                if(densidadePopulacional1 < densidadePopulacional2){
                    printf("A carta 1 (%s) venceu com o menor Densidade Populacional!\n", nomeDaCidade1);
                }else if(densidadePopulacional1 > densidadePopulacional2){
                    printf("A carta 2 (%s) venceu com o menor Densidade Populacional!\n", nomeDaCidade2);
                }else{
                    // SE AS DENSIDADES POPULACIONAIS FOREM IGUAIS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma Densidade Populacional!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 6:
                printf("Comparando PIB Per capita...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PIBs PER CAPITA
                printf("%s: %f - %s: %f\n", nomeDaCidade1, pibPerCapta1, nomeDaCidade2, pibPerCapta2);                

                if(pibPerCapta1 > pibPerCapta2){
                    printf("A carta 1 (%s) venceu com o maior PIB Per Capita!\n", nomeDaCidade1);
                }else if(pibPerCapta1 < pibPerCapta2){
                    printf("A carta 2 (%s) venceu com o maior PIB Per Capita!\n", nomeDaCidade2);
                }else{
                    // SE OS PIBs PER CAPITA FOREM IGUAIS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo PIB Per Capita!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;
            }
             //COMPARAÇÕES PARA O SEGUNDO ATRIBUTO ESCOLHIDO
            switch (atributo2)
            {
            case 1:
                printf("Comparando População...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUA POPULAÇÃO
                printf("%s: %d - %s: %d\n", nomeDaCidade1, populacao1, nomeDaCidade2, populacao2);                

                if(populacao1 > populacao2){
                    printf("A carta 1 (%s) venceu com a maior população!\n", nomeDaCidade1);
                }else if(populacao1 < populacao2){
                    printf("A carta 2 (%s) venceu com a maior população!\n", nomeDaCidade2);
                }else{
                    // SE AS POPULAÇÕES FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma população!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;
                
            case 2:
                printf("Comparando Área...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUAS ÁREAS
                printf("%s: %f - %s: %f\n", nomeDaCidade1, area1, nomeDaCidade2, area2);                

                if(area1 > area2){
                    printf("A carta 1 (%s) venceu com a maior área!\n", nomeDaCidade1);
                }else if(area1 < area2){
                    printf("A carta 2 (%s) venceu com a maior área!\n", nomeDaCidade2);
                }else{
                    // SE AS ÁREAS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma área!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 3:
                printf("Comparando PIB...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PIBs
                printf("%s: %f - %s: %f\n", nomeDaCidade1, pib1, nomeDaCidade2, pib2);                

                if(pib1 > pib2){
                    printf("A carta 1 (%s) venceu com o maior PIB!\n", nomeDaCidade1);
                }else if(pib1 < pib2){
                    printf("A carta 2 (%s) venceu com o maior PIB!\n", nomeDaCidade2);
                }else{
                    // SE OS PIBs FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo PIB!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 4:
                printf("Comparando Pontos Turísticos...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PONTOS TURISTICOS
                printf("%s: %d - %s: %d\n", nomeDaCidade1, pontosTuristicos1, nomeDaCidade2, pontosTuristicos2);                

                if(pontosTuristicos1 > pontosTuristicos2){
                    printf("A carta 1 (%s) venceu com o maior número de Pontos Turísticos!\n", nomeDaCidade1);
                }else if(pontosTuristicos1 < pontosTuristicos2){
                    printf("A carta 2 (%s) venceu com o maior número de Pontos Turísticos!\n", nomeDaCidade2);
                }else{
                    // SE OS PONTOS TURISTICOS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo número de Pontos Turísticos!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 5:
                printf("Comparando Densidade Populacional...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SUAS DENSIDADES POPULACIONAIS
                printf("%s: %f - %s: %f\n", nomeDaCidade1, densidadePopulacional1, nomeDaCidade2, densidadePopulacional2);                

                if(densidadePopulacional1 < densidadePopulacional2){
                    printf("A carta 1 (%s) venceu com o menor Densidade Populacional!\n", nomeDaCidade1);
                }else if(densidadePopulacional1 > densidadePopulacional2){
                    printf("A carta 2 (%s) venceu com o menor Densidade Populacional!\n", nomeDaCidade2);
                }else{
                    // SE AS DENSIDADES POPULACIONAIS FOREM IGUAIS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem a mesma Densidade Populacional!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;

            case 6:
                printf("Comparando PIB Per capita...\n");
                //EXIBE OS NOMES DAS DUAS CIDADES E SEUS PIBs PER CAPITA
                printf("%s: %f - %s: %f\n", nomeDaCidade1, pibPerCapta1, nomeDaCidade2, pibPerCapta2);                

                if(pibPerCapta1 > pibPerCapta2){
                    printf("A carta 1 (%s) venceu com o maior PIB Per Capita!\n", nomeDaCidade1);
                }else if(pibPerCapta1 < pibPerCapta2){
                    printf("A carta 2 (%s) venceu com o maior PIB Per Capita!\n", nomeDaCidade2);
                }else{
                    // SE OS PIBs PER CAPITA FOREM IGUAIS FOREM IGUAIS
                    printf("A carta 1 (%s) e a carta 2 (%s) tem o mesmo PIB Per Capita!\n", nomeDaCidade1, nomeDaCidade2);
                }
                
                break;
            }

            //SOMANDO OS ATRIBUTOS E COMPARANDO E EXIBINDO O RESULTADO FINAL
            int valorTotalCarta1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapta1;

            int valorTotalCarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapta2;

            if(valorTotalCarta1 > valorTotalCarta2){
                printf("A carta 1 (%s) venceu com o total de %d pontos!\n", nomeDaCidade1, valorTotalCarta1);
                printf("A carta 2 (%s) consegui apenas  %d pontos.\n", nomeDaCidade2, valorTotalCarta2);
            }else if(valorTotalCarta1 < valorTotalCarta2){
                printf("A carta 2 (%s) venceu com o total de %d pontos!\n", nomeDaCidade2, valorTotalCarta2);
                printf("A carta 1 (%s) consegui apenas  %d pontos.\n", nomeDaCidade1, valorTotalCarta1);
            }else if(valorTotalCarta1 == valorTotalCarta2){
                printf("O Jogo empatou!\n");
                printf("A carta 1 (%s) fez %d pontos e a carta 2 (%s) fez %d pontos.\n", nomeDaCidade1, valorTotalCarta1, nomeDaCidade2, valorTotalCarta2);
                
            }


        }else{
            // SE A OPÇÃO ESCOLHIDA PARA O ATRIBUTO 2 NÃO FOR VÁLIDA
            printf("Opção Inválida\n");
        }

    }else{
        // SE A OPÇÃO ESCOLHIDA PARA O ATRIBUTO 1 NÃO FOR VÁLIDA
        printf("Opção Inválida\n");
    }   
    
    return 0;
}
