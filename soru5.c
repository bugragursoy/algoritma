#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("A kenarini giriniz:");scanf("%f",&a);
    printf("B kenarini giriniz:");scanf("%f",&b);
    c=sqrt(a*a+b*b);
    printf("%f",c);
}