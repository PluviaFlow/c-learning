#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

    bool a;

    a = true;
    if(a) {
        printf("true %d\n", a);
    }
    else {
        printf("false %d\n", a);
    }

    return 0;
}
