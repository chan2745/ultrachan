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
        score = 0;
        for(j = 0; j < strlen(ox); j++)
        {
            if(ox[j] == 'O')
            {
                score++;
                total += score;
            }
            if(ox[j] == 'X')
            {
                score = 0;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}