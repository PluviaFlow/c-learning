#include <stdio.h>

int main(){
    
    int i = 0;
    while(i < 5){
        static int a = 0;
        a++;
        printf("a = %d\n", a);
        i++;
    }
    
    return 0;
}
