#include <stdio.h>
#include <string.h>

int main (){
    char a[50] = "joonas";
    char b[50] = "baekjoon";
    char scan[50];
    scanf("%s", &scan);
    if ( !strcmp(scan, a) ) printf("%s?\?!", scan);
    else if( !strcmp(scan, b) ) printf("%s?\?!", scan);
    
    return 0;
}