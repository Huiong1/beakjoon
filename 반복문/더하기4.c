#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    while ( a > 0 && b < 10){
        printf("%d\n", a + b);
        scanf("%d %d", &a, &b);
    }
}