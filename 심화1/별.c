#include <stdio.h>

int main()
{
    int a;
    int i;
    scanf("%d", &a);
    for (i = 1; i < a; i++)
    {
        for (int k = a - i ; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i; i > 0; i--)
    {
        for( int k = a - i; k > 0; k-- ){
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}