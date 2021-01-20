#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
     float change;
     int quarter = 0;
     int dime = 0;
     int nickle = 0;
     int penny = 0;

     change = get_float("How much are you owed? \n");

     if (change > .25)
     {
          while(change > .25)
          {
               change = change - .25;
               quarter++;
          }
     }
     if (change > .10)
     {
          while(change > .10)
          {
               change = change - .10;
               dime++;
          }
     }
     if (change > .05)
     {
          while(change > .05)
          {
               change = change - .05;
               dime++;
          }
     }
     if (change > .01)
     {
          while(change > .01)
          {
               change = change - .01;
               penny++;
          }
     }

     int output = quarter + dime + nickle + penny;
     //change = change - 0.01;
     //penny++;

     printf("%i\n", output);
}