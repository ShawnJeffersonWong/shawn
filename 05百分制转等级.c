#include <stdio.h>
int main0501()
{
    int score;//软件2203王鑫文
    printf("输入分数：\n");
    scanf_s("%d", &score);
        switch (score / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("等级E\n"); break;
        case 6:printf("等级D\n"); break;
        case 7:printf("等级C\n"); break;
        case 8:printf("等级B\n"); break;
        case 9:
        case 10:printf("等级A\n"); break;
        }

    return 0;
}