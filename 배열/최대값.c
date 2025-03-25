#include <stdio.h>

int main(){
    int a, max, index;
    max = 0;
    for( int i = 1 ; i <= 9; i++){
        scanf("%d", &a);
        if ( max < a) {
            index = i;
            max = a;
        }
    }
    printf("%d\n", max);
    printf("%d", index);
}