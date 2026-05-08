#include <stdio.h>

#define ONE 1
#define TWO ONE + ONE

int main(){
    int a = 10, b = 20, c;

    c = ONE + TWO * b + a;//1 + 2*20 + 10 = 51   // 1 + 1 + 1 * 20 + 10 = 32

    printf("%d\n", c);

    return 0;
}
