#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]){
    
    printf("bool  = %d\n", sizeof(_Bool));
    printf("char  = %d\n", sizeof(char));
    printf("short = %d\n", sizeof(short));
    printf("int   = %d\n", sizeof(int));

    printf("char 的范围:     %d 到 %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char 范围: 0 到 %u\n", UCHAR_MAX);
    printf("short 的范围:    %d 到 %d\n", SHRT_MIN, SHRT_MAX);
    printf("int 的范围:      %d 到 %d\n", INT_MIN, INT_MAX);
    printf("unsigned int 范围:  0 到 %u\n", UINT_MAX);
    
    return 0;
}
