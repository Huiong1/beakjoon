#include <stdio.h>

int main(){
    int a, b, c;
    int v = 0;
    scanf("%d", &a);
    int list[100];
    for( int i =0; i<a; i++){
        scanf("%d ", &b);
        list[i] = b;
    }
    scanf("%d", &c);
    for ( int i = 0; i<a; i++){
        if (list[i] == c){
            v+=1;
        }
    }
    printf("%d", v);
}