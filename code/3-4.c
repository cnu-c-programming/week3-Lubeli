#include <stdio.h>
#include <stdarg.h>

int max_of(int a,...){
    int max = 0;
    va_list ap;

    va_start(ap, a);

    for(int i = 0; i<a; i++){
        int val = va_arg(ap, int);
        if(max <= val)
            max = val;
    }
    va_end(ap);
    
    return max;
}

int main(){
    printf("%d\n", max_of(4,5,12,3,9));
    printf("%d\n", max_of(6,1,2,3,4,5,6));
    printf("%d\n", max_of(3,100,200,300));

    return 0;
}
