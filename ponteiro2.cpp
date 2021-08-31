#include <stdio.h>
int main()
{
    //Declarações
    int idade = 9;
    int *pontIdade = &idade;
    
    //Gasto de memória
    printf("\nA variavel idade utiliza %li bytes de memória. ", sizeof(idade));
    printf("\nA variavel pontIdade utiliza %li bytes de memória. ", sizeof(pontIdade));

    //Conteúdo das variaveis
    *pontIdade = 90;
    printf("\nDireto - Conteudo da variável idade %i endereço de memória %p.", idade, &idade);
    printf("\nIndireto - Conteudo da variável pontIdade %i endereço de memória %p.", *pontIdade, &pontIdade);
    printf("\nEndereço de memória do ponteiro %p.", &pontIdade);

    return 0;
}