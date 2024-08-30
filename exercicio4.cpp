#include<stdio.h>

int main(void)
{
    float SP=67836.43,RJ=36678.66,MG=29229.88,ES=27165.48,Outros=19849.53,total;
    float percentualSP,percentualRJ,percentualMG,percentualES,percentualOutros;
    total=SP+RJ+MG+ES+Outros;
    percentualSP=(SP/total)*100;
    percentualRJ=(RJ/total)*100;
    percentualMG=(MG/total)*100;
    percentualES=(ES/total)*100;
    percentualOutros=(Outros/total)*100;
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
}