#include <stdio.h>

int main(){
    
    int score[10] = {0};
    int tmp = 0;
    int i = 0;
    int n = 0;
    printf("要输入的成绩数量\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        tmp = 0;
        printf("输入第%d个成绩>\n", i+1);
        scanf("%d", &tmp);
        if(tmp > 90 && tmp <= 100)
        {
            printf("已录入：A级\n");
            score[i] = tmp;
        }
        else if(tmp > 70 && tmp <= 90)
        {
            printf("已录入：B级\n");
            score[i] = tmp;
        }
        else if(tmp > 60 && tmp <= 70)
        {
            printf("已录入：C级\n");
            score[i] = tmp;
            tmp = 0;
        }
        else if(tmp <= 60)
        {
            printf("已录入：D级\n");
            score[i] = tmp;
        }
        else
        {
            printf("输入错误，请重新输入\n");
            i--;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", score[i]);
    }


    return 0;
}
