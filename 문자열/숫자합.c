#include <stdio.h>

int main(){
    char list[100];
    int a;
    int sum = 0;

    scanf("%d", &a);
    scanf("%s", list);

    for(int i =0; i<a; i++){
        sum += list[i]-'0';
    }
    printf("%d\n", sum);
}