// Exercicio feito em C
#include <stdio.h>

int main(void)
{
    int INDICE = 13, SOMA=0, K=0;
    while(K<INDICE)
    {
        K=K+1;
        SOMA = SOMA+K;
    }
    printf("%d",SOMA);
    return 0;
}
// SOMA = 91