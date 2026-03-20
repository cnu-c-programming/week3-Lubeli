#include <stdio.h>
#include <stdarg.h>

void my_sum(char c, int a,...){
    int sum = 0;
    va_list ap;

    va_start(ap, a);

    for(int i = 0; i<a; i++){
        if(c == 'S'){
            char* val = va_arg(ap, char*);
            printf(" %s",val);
        }else if(c == 'C'){
            char val = va_arg(ap, int);
            printf("%c",val);
        }else if(c == 'D'){
            int val = va_arg(ap, int);
            sum += val;
        }
        
    }
    if(c == 'D')
            printf("%d",sum);

    va_end(ap);
    printf("\n");
}

int main(){
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
