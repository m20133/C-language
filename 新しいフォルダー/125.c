#include <stdio.h>

int main(void)
{
    int max, min, sum;
    printf("最小値を入力してください");
    scanf("%d", &min);
    printf("最大値を入力してください");
    scanf("%d", &max);

    sum = (max + min) * (max - min + 1) / 2;

    printf("%d~%dの合計は%dです",min, max, sum);

        return 0;
}