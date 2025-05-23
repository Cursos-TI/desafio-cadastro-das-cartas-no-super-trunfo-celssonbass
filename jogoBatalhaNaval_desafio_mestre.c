#include <stdio.h>

#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define LINHAS_HABILIDADE 5
#define COLUNAS_HABILIDADE 5

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Colunas do tabuleiro

    int tabuleiro [LINHAS_TABULEIRO][COLUNAS_TABULEIRO];//Declarando a matriz 
    
    for(int i = 0; i < LINHAS_TABULEIRO; i++){
        for (int j = 0; j < COLUNAS_TABULEIRO; j++ ){
            tabuleiro[i][j] = 0; //Definindo os valores do tabuleiro com 0;
        }
    }

    //Criando as matrizes de Habilidade
    int cone[LINHAS_HABILIDADE][COLUNAS_HABILIDADE];
    int cruz[LINHAS_HABILIDADE][COLUNAS_HABILIDADE];
    int octaedro[LINHAS_HABILIDADE][COLUNAS_HABILIDADE];

    int indice = 2, qtd = 1; //Define o indice inicial e a quantidade a ser preenchida com 3

    //Preenchendo a habilidade cone
    for(int i = 0; i < LINHAS_HABILIDADE; i++){//Percorre as Linhas
        
        int j = 0;

        while(j < COLUNAS_HABILIDADE){

           if(j == indice){//Se j for igual ao indice inicial        
                for(int k = 0; k < qtd; k++){
                    cone[i][j] = 5; //preenche com 3 de acordo com a quantidade informada
                    j++;
                }
            
                indice --;
                qtd = qtd + 2;

           }else{
                cone[i][j] = 0; //preenche o indice com 0;
                j++;
           }
        }
        //Restaura os valores padrão para indice e qtd para serem usados na prixima habilidade
        if(i == LINHAS_HABILIDADE - 1){
            indice = 2;
            qtd = 1;
        }
    }

    //Preenchendo a habilidade Cruz
    for(int i = 0; i < LINHAS_HABILIDADE; i++){//Percorre as Linhas

        int j = 0;

        while(j < COLUNAS_HABILIDADE){

           if(j == indice){//Se j for igual ao indice inicial        
                for(int k = 0; k < qtd; k++){
                    cruz[i][j] = 5; //preenche com 3 de acordo com a quantidade informada
                    j++;
                }
            
            //Altera o indice e a quantidade para preencher a segunda linha, depois restaura os valores padrão
            if(i == 1){ indice = 0; qtd = 5; }else{ indice = 2; qtd = 1; }
            
           }else{
            cruz[i][j] = 0;
            j++;
           }
        }
    }

    //Preenchendo a habilidade octaedro
    for(int i = 0; i < LINHAS_HABILIDADE; i++){

        int j = 0;
        int controle; //Controle para incrementar ou decrementar as variaveis indice e qtd

        while(j < COLUNAS_HABILIDADE){
        
            //quando o indice chegar em 0 ativa o controle para inverter a ordem de incremento e decremento
            if(indice == 0){controle = 1;}

           if(j == indice){            
                for(int k = 0; k < qtd; k++){
                    octaedro[i][j] = 5;//Quando encontra a posicao inicial preenche com 3
                    j++;
                }            

            if(controle == 1){ //Se controle for igual a 1 incrementa indice e decrementa qtd
                indice ++;
                qtd = qtd - 2;
            }else{//Se controle não for igual a 1 decrementa indice e incrementa qtd
                indice --;
                qtd = qtd + 2;
            }

           }else{
            octaedro[i][j] = 0;
            j++;
           }
        }
        //Restaura os valores padrão para indice e qtd para serem usados em outra habilidade
        if(i == LINHAS_HABILIDADE - 1){
            indice = 2;
            qtd = 1;
        }
    }

    //Criando os navios
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3 };

    //Posicionando o navio 1
    for(int i = 0, j = 7; j < 10; j++){ tabuleiro[i][j] = navio1[j-7];};
    //Posicionando o navio 2
    for(int i = 7, j = 9; i < 10; i++){ tabuleiro[i][j] = navio2[i-7];};
    //Posicionando o navio 3
    for(int i = 8, j = 5; j < 8; j++, i--){ tabuleiro[i][j] = navio3[8-i];};
    //Posicionando o navio 4
    for(int i = 9, j = 6; j < 9; j++, i--){ tabuleiro[i][j] = navio4[9-i];};

    //posicionando o cone
    int origem_cone[2] = {2,2};

    for(int i = origem_cone[0] - 2; i < LINHAS_HABILIDADE; i++){
        for(int j = origem_cone[1] - 2; j < COLUNAS_HABILIDADE; j++){
            tabuleiro[i][j] = cone[i][j];
        }
    }

    //posicionando a cruz
    int origem_cruz[2] = {3,7};
    //como a cruz se posicionará a partir da coluna 5 da linha 1 precisamos adicionar +5 à COLUNAS_HABILIDADE, diminuir 1 da linha inicial da cruz e diminuir 5 da coluna inicial da cruz.
    for(int i = origem_cruz[0] - 2; i < LINHAS_HABILIDADE; i++){
        for(int j = origem_cruz[1] - 2; j < COLUNAS_HABILIDADE + 5; j++){
            tabuleiro[i][j] = cruz[i-1][j-5];
        }
    }

    
    //posicionando o octaedro
    int origem_octaedro[2] = {7,2};
    
    for(int i = origem_octaedro[0] - 2; i < LINHAS_HABILIDADE + 5; i++){
        for(int j = origem_octaedro[1] - 2; j < COLUNAS_HABILIDADE; j++){
            tabuleiro[i][j] = octaedro[i-5][j];
        }
    }


    // Exibe as colunas no console
     printf("  ");
    for(int i = 0; i < 10; i++){
        printf(" %c ", linha[i]);        
    }
    printf("\n");

    //Exibe as linhas no console
    for(int i = 0; i < 10; i++){

        if(i < 9){
             printf(" %d", i+1);
        }else{
            printf("%d", i+1);
        }
       
        for(int j = 0; j < 10; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");

    return 0;
}