#include <stdio.h>

int main(){
    int t1,t2,t3,x,i;
    printf("Kaçıncı değere kadar görmek istersiniz");
    scanf("%d",&x);
    t1=1;
    t2=1;

    for(i=1;i<=x;i++){
        printf("%d ",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
}