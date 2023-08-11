#include <stdio.h>
#include <stdlib.h>

void desenhaTralha(int *imprimeTralha, int *totalTralha){
    while ((*imprimeTralha) < (*totalTralha)) {
        printf("#");
        (*imprimeTralha)++;
    }
}

void desenhaEspacos(int *imprimeEspacos, int *quantTotal){

    while ((*imprimeEspacos) < (*quantTotal)) {
        printf(" ");
        (*imprimeEspacos)++;
    }

}

int main(){

    int imprimeEspacos = 0;
    int totalEspacos = 5;

    int imprimeTralha = 0;
    int totalTralha = 1;

    int imprimeEspacoInicial = 10;
    int contDoEspacoInicial = 0;

    int total = 1;
    int contaTralha = 0;

    printf("\n\n");

    for(int i = 0; i <= 5; i++){

        desenhaEspacos(&contDoEspacoInicial, &imprimeEspacoInicial);

        desenhaEspacos(&imprimeEspacos, &totalEspacos);
  
        desenhaTralha(&imprimeTralha, &totalTralha);

        printf(" ");

        desenhaTralha(&contaTralha, &total);
        total++;
        contaTralha = 0;

        totalEspacos--;
        totalTralha++;
        imprimeTralha = 0;
        imprimeEspacos = 0;

        imprimeEspacoInicial = 10;
        contDoEspacoInicial = 0;


        printf("\n");
    }
}
