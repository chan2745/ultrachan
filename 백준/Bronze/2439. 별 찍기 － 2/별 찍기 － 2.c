#include<stdio.h>

int main()
{
    int i, j, k;
    int n;
    char star = '*';
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++) {
        for(j = n; j > i + 1; j--) {
            printf(" ");
        }
        for(k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}