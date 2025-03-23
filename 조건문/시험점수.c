#include <stdio.h>
#include <string.h>

int main (){
    int scan;
    scanf("%d", &scan);
    if ( scan >= 90 && scan <=100) printf("A");
    else if (scan >= 80 && scan <=89 ) printf("B");
    else if (scan >= 70 && scan <= 79) printf("C");
    else if (scan >= 60 && scan <= 69) printf("D");    
    else printf("F");
    return 0;
}