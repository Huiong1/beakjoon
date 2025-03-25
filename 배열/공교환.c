#include <stdio.h>

int main(){
    int list[100];
    int a, b;
    int index1, index2;
    int temp;
    scanf("%d %d", &a, &b);
    for(int i = 1 ; i<= a; i++){
        list[i] = i;
    }
    for( int i = 1; i <= b; i++){
        scanf("%d %d", &index1, &index2);
        temp = list[index1];
        list[index1] = list[index2];
        list[index2] = temp;
    }
    for( int i = 1; i<=a; i++){
        printf("%d ", list[i]);
    }

}