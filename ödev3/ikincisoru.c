#include <stdio.h>

int main(){
    int gun= 0;
    printf("Kacinci gününe gitmek istersiniz?\n");
    scanf("%d", &gun);
    switch(gun){
        case 1:
            printf("Pazartesi!");
            break;
        case 2:
            printf("Sali");
            break;
        case 3:
            printf("Çarşamba");
            break;
        case 4:
            printf("Perşembe");
            break;
        case 5:
            printf("Cuma");
            break;
        case 6:
            printf("Cumartesi");
            break;
        case 7:
            printf("Pazar");
            break;
        default:
            printf("Haftan %d. günü mü? Anlamadım",gun);
    }
    return 0;
}