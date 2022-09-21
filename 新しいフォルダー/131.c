#include <stdio.h>

int main(void){

    int teika;
    printf("定価を入力して下さい");
    scanf("%d",&teika);
    printf("1割引 = %d円", teika * 0.9);
    

    return 0;
}