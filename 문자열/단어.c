#include <stdio.h>
#include <string.h>

int main(){
    char list[1000000];
    int count = 0;
    scanf("%[^\n]", list);
    for( int i = 0; i< strlen(list); i++){
        if (list[i] == ' ') count++;
    }
    printf("%d", count+1);

    return 0;
}