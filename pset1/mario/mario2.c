#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    n = get_int("Width: ");
    if (n < 1 || n > 8)
    {
        get_int("Width: ");
    }
    printf("%d", n);
}