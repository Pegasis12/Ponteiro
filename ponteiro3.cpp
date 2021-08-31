#include <stdio.h>
int main()
{
    //declarações
    float numero = 10.12;
    float*ponteiroA = &numero;
    float*ponteiroB = ponteiroA;
    float **ponteiroC = &ponteiroB;


    //impressões
    printf("\nnumero = %f e endereço %p", numero, &numero);
    printf("\nnumero = %f e endereço %p", *ponteiroA, ponteiroA);
    printf("\nnumero = %f e endereço %p", *ponteiroB, ponteiroB);


    printf("\nEndereco de memoria de ponteiroB %p", &ponteiroB);
    printf("\nConteudo ponteiroC = %p e endereço %p", ponteiroC, &ponteiroC);

    return 0;
}