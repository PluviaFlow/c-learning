#include <stdio.h>

#define M 3.0e-23

int main(){

    int i = 0;
    //int num =0;
    double num = 0;

    printf("请输入水的夸脱数量: \n");

    scanf("%d", &i);
    
    num = i*950 / M;

    printf("%d夸脱的水包含的水分子为：%e\n", i, num);
    return 0;
}
