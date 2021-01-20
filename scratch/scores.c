#include <cs50.h>
#include <stdio.h>

/* Prototype -- Prototypal Inheriotance*/
float average(int length, int array[]);

int main(void)
{
    int n = get_int("Number of scores: ");

    int scores[n];

    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    /* "%.1f" the .1 in between the float placeholder denotes a single decimal place*/
    printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float) sum / (float) length;
}