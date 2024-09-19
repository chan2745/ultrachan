#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int j;
    int num;
    char ox[80];
    int score = 1;
    int total;

    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        scanf("%s", ox);
        total = 0;
        score = 1;
        for(j = 0; j < strlen(ox); j++)
        {
            if(ox[j] == 'O')
            {
                total += score;
                score++;
            }
            if(ox[j] == 'X')
            {
                score = 1;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}