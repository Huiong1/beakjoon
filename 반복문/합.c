#include <stdio.h>

int main(){
    int a;
    int result = 0;
    scanf("%d", &a);

    for ( int i = 1; i <= a; i++){
        result += i;
    }
    printf("%d", result);
}