#include <stdio.h>
int main0501()
{
    int score;//���2203������
    printf("���������\n");
    scanf_s("%d", &score);
        switch (score / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("�ȼ�E\n"); break;
        case 6:printf("�ȼ�D\n"); break;
        case 7:printf("�ȼ�C\n"); break;
        case 8:printf("�ȼ�B\n"); break;
        case 9:
        case 10:printf("�ȼ�A\n"); break;
        }

    return 0;
}