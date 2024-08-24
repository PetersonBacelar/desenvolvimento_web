#include <stdio.h>
#include <locale.h>

int main (){
    //setlocale(LC_ALL, "Portuguese");
    printf("Olá mundo maça!");

    // parte 2 aula - notacao cientifica

    double tempototal = 0.000000002395;

    printf (" \n %.12f", tempototal);
    printf (" \n %.3E", tempototal);

    // parte 3

    char letra = 'F';
    printf("\n\n%c", letra);
    printf("\n%d", letra);

    int c = 38;
    printf("\n%c", c);



    //double tempototal = 

    return 0; 


}