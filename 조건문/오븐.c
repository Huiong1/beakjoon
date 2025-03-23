#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    
    b = b+ c;
    while ( b >= 60){
        a= a + 1; 
        b = b - 60;
        if( a >= 24){
            a = a - 24;
        }
    }
    printf("%d %d", a, b);

}