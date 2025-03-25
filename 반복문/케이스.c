#include <stdio.h>

int main(){
    int a, b, c, result;
    scanf("%d", &a);

    for( int i = 0; i< a; i++){
        scanf("%d %d", &b, &c);
        result = b + c;
        printf("%d\n", result);
    }
    return 0;
}