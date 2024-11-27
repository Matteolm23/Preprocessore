#include<stdio.h>

#define ABSOLUTE(value) -value

int main(void){

    int dim, n, i = 0;
    printf("inserisci il numero di valori da elaborare: ");
    scanf("%d", &dim);
    int a[dim];
    for (i = 0; i < dim; i++){

        printf ("inserisci il %do numero: ", i+1);
        scanf ("%d", &a[i]);

    }

    printf("i valori assoluti dei numeri inseriti sono: ");

    for (i = 0; i < dim; i++){

        n = a[i];
        if(a[i] < 0)
        { n = ABSOLUTE(a[i]); }
        printf("%d ", n);

    }
    
    printf("\n");

    return 0;

}
