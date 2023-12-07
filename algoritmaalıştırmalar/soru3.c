#include <stdio.h>

int main(){
    int x;
    printf("Haftanın hangi gününü görüntülemek istersiniz\n");
    scanf("%d",&x);
    switch(x){
        case 1:printf("Pazartesi\n");break;
        case 2:printf("Salı\n");break;
        case 3:printf("Çarşamba\n");break;
        case 4:printf("Perşembe\n");break;
        case 5:printf("Cuma\n");break;
        case 6:printf("Cumartesi\n");break;
        case 7:printf("Pazar\n");break;
        default:printf("1-7\n");
    }
}