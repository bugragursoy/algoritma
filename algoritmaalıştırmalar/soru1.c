#include <stdio.h>

int main(){
    int a,b;
    printf("2 sayi değeri girin\n");
    scanf("%d %d",&a ,&b);
    if(a%b==0){
        printf("Girdiğiniz değerler birbirine tam bölünüyor");
    }else{
        printf("Değerler birbirne tam bölünmüyor");
    }
}