#include <stdio.h>

int main(){
    int x,y,z;
    printf("3 farklı sayı girin:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z){
        printf("\nEn yüksek değer:%d",x);
    }else if(y>x && y>z){
        printf("\nEn yüksek değer:%d",y);
    }else if(z>x && z>y){
        printf("\nEn yüksek değer:%d",z);
    }
}