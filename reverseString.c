#include <stdio.h>
#include <string.h>

void reverseString (char *str);
//void preenchezero(char *ptr, unsigned int num);

int main(int argc,  char argv[])
{
    char str[100];

    printf("Digite uma string: \n");
    fgets(str, 100, stdin);

    reverseString(str);
    printf("Sua string invertida eh: %s\n", str);

    return 0;
}
/*
void preenchezero(char *ptr, unsigned int num)
{
    unsigned int i;
    for(i = 0; i< num; i++)
    {
        *ptr = '\0'; // igual a &ptr = 0;
        ptr++;
    }
}
*/
void reverseString (char *str)
{
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    char temp;

    while(fim > inicio)
    {
        //troca caracteres apontados por inicio e fim
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        //move os ponteiros
        inicio++;
        fim--;
    }
}
