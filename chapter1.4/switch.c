#include <stdio.h>

int main(){
    //int tmp = 2;
    enum weekday{
    sum, mon, tue, wed
    } a;

    a = tue;

    switch (a){
    case 1: 
        printf("1\n");
        break;
    case 2: 
        printf("2\n");
        break;
    case 3: 
        printf("3\n");
        break;

    }

    return 0;
}
