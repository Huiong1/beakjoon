#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = 0;

    for( int i =0; i<b; i++){
        scanf("%d %d", &c, &d);
        sum += (c * d);
    }
    if(a == sum) printf("Yes");
    else printf("No");
}