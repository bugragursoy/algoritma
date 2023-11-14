#include <stdio.h>
#include <stdlib.h>

int main(){
    int terim1 = 0,terim2 = 0,terim3 = 0, i=0, x=0;
    printf("Kaçıncı terimi istiyorsun\n");
    scanf("%d", &x);
    terim1 = 1;
    terim2 = 1;


    for(i=1; i<=x; i++){
        printf("%d ",terim1);
        terim3 =terim1+terim2;

        terim1 =terim2;

        terim2 =terim3;

    }

    return 0;
}