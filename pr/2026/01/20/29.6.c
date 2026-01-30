#include <stdio.h>

struct STUDENT{
    int score;
};

int main(void)
{
    struct STUDENT s1;

    printf("テストの点数を入力してください\n");
    scanf("%d", &s1.score);

    if(s1.score >=60){
        printf("合格\n");
    } else {
        printf("不合格\n");
    }

    return 0;
}