#include<stdio.h>
#include"es_cerchio_math.h"
#define CIRCUMFERENCE(r) 2*r*PI
#define AREA(r) PI*(r*r)

int main(void){

    float r; 

    printf("inserisci il raggio del cerchio: ");
    scanf("%f", &r);

    float a = AREA(r), c = CIRCUMFERENCE(r);

    printf("la circonferenza del cerchio e' %f\n", c);
    printf("l'area del cerchio e' %f\n", a);

    return 0;

}