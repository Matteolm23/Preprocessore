#include<stdio.h>
#define CUBE(x) x*x*x

int main(void){

    int num, num2;
    printf("inserisci il numero da elaborare: ");
    scanf("%d", &num);
    cnum = CUBE(num);
    
    printf("il cubo di %d è %d\n", num, cnum);

    return 0;

}