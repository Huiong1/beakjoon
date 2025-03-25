#include <stdio.h>

int main(){
    int list[31];
    for ( int i =1; i<=30; i++){
        list[i] = 0;
    }
    int a;
    for( int i = 0; i< 28; i++){
        scanf("%d", &a);
        list[a] = 1;
    }
    for( int i = 1; i<=30; i++){
        if(list[i] == 0) printf("%d\n", i);
    }
}