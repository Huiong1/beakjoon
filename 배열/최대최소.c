#include <stdio.h>

int main(){
    int n, a;
    int max = -10000000;
    int min = 10000000;
    scanf("%d", &n);
    for( int i = 0; i<n; i++){
        scanf("%d", &a);
        if( max < a) max = a;
        else if ( min > a) min = a;
    }
    printf("%d %d", min, max);
}