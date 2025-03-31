#include <stdio.h>

int main(){

    char list[1000];
    int a;

    scanf("%s", list);
    scanf("%d", &a);
    printf("%c", list[a-1]);
}