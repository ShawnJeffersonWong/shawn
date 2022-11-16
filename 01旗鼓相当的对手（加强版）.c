#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[9];
    int chinese;
    int math;
    int english;
    int total;
};
typedef struct student ss;

int main()
{
    int i, j, N;
    scanf_s("%d", &N);
    ss* p = (ss*)calloc(N, sizeof(ss));
    ss temp;
    for (i = 0; i < N; i++)
    {
        scanf_s("%s%d%d%d", &(p + i)->name, &(p + i)->chinese,
            &(p + i)->math, &(p + i)->english);
        (p + i)->total = (p + i)->chinese + (p + i)->math
            + (p + i)->english;
    }
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N-1; j++)
        {
            if (strcmp((p + i)->name, (p + j)->name) > 0)
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (abs((p + i)->chinese - (p + j)->chinese) <= 5 &&
                abs((p + i)->math - (p + j)->math) <= 5 &&
                abs((p + i)->english - (p + j)->english) <= 5 &&
                abs((p + i)->total - (p + j)->total) <= 10)
            {

                if (strcmp((p + i)->name, (p + j)->name) > 0)
                {
                    printf("%s %s\n", (p + j)->name, (p + i)->name);
                }
                else
                {
                    printf("%s %s\n", (p + i)->name, (p + j)->name);
                }

            }
        }
    }
    free(p);
    return 0;
}