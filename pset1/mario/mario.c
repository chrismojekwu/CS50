#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int row = 1;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);
    for (int i = 0; i < n; i ++)
    {
        int space = 0;
            while (space < n - row)
            {
                printf(" ");
                space++;
            }
        for (int j = 0; j < row ; j++)
        {
            printf("#");
        }
        printf("\n");
        row++;
    }
    printf("\n");
}