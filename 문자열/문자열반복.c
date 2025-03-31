#include <stdio.h>
#include <string.h>

int main (){
    int a, b;
    char list[20];
    scanf("%d", &a);
    for( int i = 0; i<a; i++){
        scanf("%d %s", &b, list);
        for(int j = 0; j < strlen(list); j++){
            for(int k = 0; k < b; k++){
                printf("%c", list[j]);
            }
        }
        printf("\n");
    }
}