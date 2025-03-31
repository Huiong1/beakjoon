#include <stdio.h>
#include <stdlib.h>

int function(int param){
    int num = (param / 100) + (((param / 10) % 10) * 10) + ((param % 10) * 100);
    return num;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a = function(a);
    b = function(b);
    if(a>= b) printf("%d\n", a);
    else printf("%d\n", b);
    
    return 0;
}