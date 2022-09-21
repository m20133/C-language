#include <stdio.h>

int main(){
    int score;
    printf("点数を入力してください:");
    scanf("%d",&score);
    if(score > 100){
        printf("入力が100よりも大きいので修正します\n");
        score = 100;
    }
    printf("点数は%d点です",score);
    return 0;

}