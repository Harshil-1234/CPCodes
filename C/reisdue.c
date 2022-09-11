#include<stdio.h>

int main(void){
    int a=3,b=4;
    static int result = 1;

    result = a*b+a/3+b*2;
    printf("%d",result);
    
    return 0;
}