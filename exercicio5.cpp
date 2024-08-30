#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "Chaves",palavra[20],letra;
    int tamanho = strlen(str),j,i;
    for(i=tamanho-1,j=0;j!=tamanho;i--)
    {
        palavra[j]=str[i];
        j++;
    }
    palavra[j]='\0';
    printf("%s",palavra);
    return 0;
}