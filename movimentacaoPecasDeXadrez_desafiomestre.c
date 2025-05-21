#include <stdio.h>
    //Função para simular o movimento da torre
    void moverTorre(int casas){
        if(casas > 0){
            printf("Direita \n");
            moverTorre(casas - 1);
        }
    }
    //Função para simular o movimento do Bispo
    void moverBispo(int casas){
        
        if(casas > 0){
            for(int vertical = 0; vertical < 1; vertical ++ ){
                printf("Cima, ");

                for(int horizontal = 0; horizontal < 1; horizontal ++ ){
                    printf("Direita \n");
                }
            }      
            
            moverBispo(casas - 1);
        }

    }

    //Função para simular o movimento da rainha
    void moverRainha(int casas){
        if(casas > 0){
            printf("Esquerda \n");
            moverRainha(casas - 1);
        }
    }


int main(){

    //Movimentando a Torre cinco casas para a direita
    printf("Movimentando a Torre cinco casas para a direita \n");
    moverTorre(5);

    //Movimentando o Bispo 
    printf("Movimentando o Bispo cinco casas na diagonal \n");
    moverBispo(5);

    //Movimentando a Rainha
    printf("Movimentando a Rainha oito casas para a esquerda \n");
    moverRainha(8);

    printf("\n");

    //Movimentando o Cavalo
    printf("Movimentando o Cavalo duas casas para cima e uma para a direita \n");
    
    for(int cima = 1, direita = 1;  cima < 2 && direita < 2; cima ++){
        for(int vertical = cima; vertical <= 2; vertical ++){
            printf("Cima \n");
        }
        for(int horizontal = direita; horizontal < 2; horizontal ++){
            printf("Direita \n");
        }
    }
    
    return 0;
   
}