#include <stdio.h>

int main(){
    int x=0,y=0,z=0;
    printf("3 farklı sayi giriniz \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("x:%d, y:%d, z:%d \n", x,y,z);
    if(z>x && z>y){
        printf("En yüksek sayi:%d",z);
    }else if(y>x && y>z ){
        printf("En yüksek sayi:%d",y);
    }else if(x>y && x>z){
        printf("En yüksek sayi:%d",x);
    }
    return 0;
}