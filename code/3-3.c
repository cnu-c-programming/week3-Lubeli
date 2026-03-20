#include <stdio.h>
#include <stdarg.h>

int average(int a,...){
    int sum = 0;
    va_list ap;

    va_start(ap, a);

    for(int i = 0; i<a; i++){
        int val = va_arg(ap, int);
        sum += val;
    }
    va_end(ap);
    
    return sum/a;
}

int main(){
    printf("%d\n", average(3,10,20,30));
    printf("%d\n", average(5,10,20,30,40,50));

    return 0;
}
