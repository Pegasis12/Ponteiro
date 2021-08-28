#include <stdio.h>
int main()
{
    //declaração de vaiaveis comuns.
    int idade;

    //declaração de ponteiro.
    int *pontIdade = &idade; //atribui o endereco de memoria de idade para o ponteiro

    //Apontamento com scanf
    printf("\nDigite a idade: ");
    //scanf("%d", &idade); //forma classica
    scanf("%d", pontIdade); //Forma indireta utilizando o ponteiro mas digitando na apontada
    printf("\nO conteudo da variavel idade %i", idade);

    //teste
    //endereço de memoria das variaveis
    printf("\nEndereço de memoria da variavel idade %p", &idade);
    printf("\nEndereço de memoria da variavel pontIdade %p", &pontIdade);

    //Conteudo das variaveis
    //idade = 5; //forma classica (Direta)
    *pontIdade = 5;
    printf("\nO conteudo da variavel idade %i", idade);
    printf("\nO conteudo da variavel pontIdade é %p", pontIdade);

    //Imprimir o conteudo da variavel idade
    printf("\nO conteudo da variavel idade %i", idade);
    printf("\nO conteudo da variavel idade %i", *pontIdade);

    return 0;
}
