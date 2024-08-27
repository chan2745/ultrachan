#include <stdio.h>

int main()
{
    int hour;
    int min;

    scanf("%d %d", &hour, &min);

    if(min >= 45) {
        printf("%d %d", hour, min - 45);
    } else if(min < 45) {
        if(hour == 0) {
            printf("%d %d", 23, 60 + min - 45);
        } else {
            printf("%d %d", hour - 1, 60 + min - 45);
        }
    }

    return 0;
}