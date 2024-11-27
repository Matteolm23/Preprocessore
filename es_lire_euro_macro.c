#include<stdio.h>
#define LIRE_EURO(x) x/1936
#define EURO_LIRE(x) x*1936

int main(void){

    float n, n2;
    char valuta;

    printf("inserisci il tipo di valuta:\nE per EURO \nL per LIRE\n");
    scanf("%c", &valuta);
    printf("inserisci il valore iniziale: ");
    scanf("%f", &n);

    switch(valuta){
        case 'e':
        case 'E':
        n2 = EURO_LIRE(n);
        printf("%f euro -----> %f lire\n", n, n2);
        break;
        case 'l':
        case 'L':
        n2 = LIRE_EURO(n);
        printf("%f lire -----> %f euro\n", n, n2);
        break;
        default: printf("valuta non riconosciuta\n");

    }

    return 0;
}