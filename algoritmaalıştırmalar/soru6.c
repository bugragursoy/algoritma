#include <stdio.h>

int main(){
    int x,y,toplam=1,i;
    printf("Sayi giriniz:");scanf("%d",&x);
    printf("us giriniz:");scanf("%d",&y);
    for(i=0;i<y;i++){
        toplam=toplam*x;
    }
    printf("sonuc:%d",toplam);
}