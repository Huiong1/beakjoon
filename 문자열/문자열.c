#include <stdio.h>
#include <string.h>

int main(){
    char list[1000];
    int a;

    scanf("%d", &a);
    for( int i = 0 ; i<a; i++){
        scanf("%s", list);
        printf("%c%c\n",list[0], list[strlen(list)-1]);
    }
}