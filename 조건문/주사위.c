#include <stdio.h>


int main(){
    int a, b, c;
    int coin;
    int times;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b == c){
        coin = 10000+ a * 1000;
    }
    else if (a == b | b == c | a == c){
        if ( a == b ) times = a;
        else if ( b == c ) times = b;
        else times = c;
        coin = 1000 + times * 100;
    }
    else{
        times = a;
        if (a <= b ) {
            times = b;
            if ( b<= c){
                times = c;
            }
        }
        else if ( a <= c) times = c;
        coin = times * 100;
    }
    printf( "%d", coin);
}