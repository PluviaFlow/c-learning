#include <stdio.h>

int main(){

    char s[5];

    gets(s);
    printf("%s", s);
    printf("@@@@@\n");
    puts("####");
    puts(s);

    return 0;
}
