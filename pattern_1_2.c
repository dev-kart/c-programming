#include <stdio.h>

int main()
{
    int i, j, k, l;

    // 1st half of the pattern
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5 - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // triangle pattern
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5 - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (k = 1; k <= i; k++)
    //     {
    //         printf("*");
    //     }
    //     for (l = 2; l <= i; l++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    //less complex method
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}