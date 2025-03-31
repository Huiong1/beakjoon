#include <stdio.h>

int main(){
    char list[101];
    while(fgets(list, sizeof(list),stdin)!=NULL){
        printf("%s", list);
    }
    return 0;
}