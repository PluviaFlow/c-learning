#include <stdio.h>

int main(){

    //unsigned char ch;
    int ch;//字符型范围太小，无符号形不能存-1；
    printf(">");
    ch = getchar();
    putchar(ch);
    putchar('\n');
    printf("ch=%d\n", ch);

    return 0;
}
