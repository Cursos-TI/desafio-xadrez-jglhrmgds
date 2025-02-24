#include <stdio.h>
#include <locale.h>
// Recursividade para o movimento das peças
void recursivotorre(int numero){

    if (numero > 0)
    {
        printf("Direita \n");
        recursivotorre(numero - 1);
    }
}

void recursivorainha(int numero){

    if (numero > 0)
    {
        printf("Esquerda \n");
        recursivotorre(numero - 1);
    }
}

void recursivobispo(int numero){

    for (int i = numero; i > 0; i--)
    {
        printf("Cima \n");
        for (int j = 1; j > 0; j--)
        {
            printf("Direita\n");
        } 
    }
}


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    //movimento da torre usando recursividade
    printf("Movimento da torre: \n");
    recursivotorre(5);

    printf("\n");

    // Movimento do bispo usando recursividade
    printf("Movimento do bispo:\n");
    recursivobispo(5);
    
    printf("\n");
    
    //Movimento da rainha usando recursividade
    printf("Movimento da rainha:\n");
    recursivorainha(8);
    
    printf("\n");

   //Movimento do cavalo utilizando loops aninhados
    printf("Movimento do cavalo:\n");
    for (int vertical = 2; vertical > 0; vertical--)
   {
    printf("Baixo\n");
    for (int horizontal = 1; horizontal > 0; horizontal--)
    {
        if (vertical == 1)
        {
            printf("Esquerda\n");
        }  
    } 
   }
   
    
    printf("\n");

    return 0;
}

