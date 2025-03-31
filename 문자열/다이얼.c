#include <stdio.h>
#include <string.h>

int main(){
    int time[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    char list[16];
    int times=0;
    scanf("%s", list);
    for(int i =0; i<strlen(list); i++){
        times += time[list[i]-'A'];
    }
    printf("%d\n", times);
    return 0;
}