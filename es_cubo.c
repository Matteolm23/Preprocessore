#include<stdio.h>
#define CUBE(x) x*x*x

int main(void){

    int num, cnum;
    printf("inserisci il numero da elaborare: ");
    scanf("%d", &num);
    cnum = CUBE(num);
    
    printf("il cubo di %d e' %d\n", num, cnum);

    return 0;

}