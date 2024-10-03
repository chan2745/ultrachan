#include <stdio.h>


int main()
{
    int n;
    int i = 0;

    scanf("%d", &n);
    
    if(n == 1)
    {
        printf("1");
        return 0;
    }

    while(1)
    {
        n = n - 6 * i;
        i++;
        if(n <= 1)
            break;
    }
    printf("%d\n" , i);
    return 0;
}