#include <stdio.h>

int main(){

    int i = 0;
   
    printf("*** Movimento do Bispo ***\n");

 //usei while para fazer o movimento do bispo.
    while (i <= 4)
    {
        printf("Bispo se move para direita cima\n");
     
       i++;
    }
    
    printf("*** Movimento da Torre ***\n");

 //usei do-while para fazer o movimento da torre.  
    do{
        printf("Torre se move para direita\n");

        i++;

    }while (i <= 9);  //variavel i está incrementada.
    
 //usei o for para movimentação da rainha.
    printf("*** Movimento da Rainha ***\n");
 
    for (i ; i <= 17 ; i++)  //variavel i está incrementada.
    {
       printf("Rainha se move para esquerda\n");
    }
    
    
    return 0;
}