#include <stdio.h>
int main()
{
    double salario[5] = {34.6, 12, 6, 9, 5};
    //double *pontSal = &salario[0];
    double *pontSal = salario;

    //utilizando indexação
    /*printf("\nPOnteiro inicial %p", pontSal);
    for (int i = 0; i < 5; i++){
        //printf("\nsalario[%i] = %lf - %p", i, salario[i], &salario[i]);
        printf("\nsalario[%i] = %2lf - %p", i, pontSal[i], &pontSal[i]);
    }
    printf("\nPonteiro final %p", pontSal);
    */



    //Utilizando aritmedica de ponteiros.
    for (int i = 0; i < 5; i++){
        //printf("\nsalario[%i] = %lf - %p", i, salario[i], &salario[i]);
        printf("\nsalario[%i] = %2lf - %p", i, *pontSal, pontSal);
        pontSal++; //Aritmética de ponteiros.
    }
    printf("\nPonteiro final %p", pontSal);
    pontSal -= 5; //Aritmética de ponteiros;
    printf("\nOnde estou? %p", pontSal);

    return 0;
}