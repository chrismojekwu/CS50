#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkChar(char input);
int checkWords(string input);
int checkSentence(string input);

int main(void)
{
    string userInput = get_string("Please provide a string: ");
    int letterCount = 0;
    for(int i = 0, n = strlen(userInput); i < n; i++ )
    {
        if (checkChar(userInput[i]) == 0)
        {
            letterCount++;
        }
    }

    float letters = letterCount;
    float words = checkWords(userInput);
    float sentence = checkSentence(userInput);

    float index = 0.0588 * letters - 0.296 * sentence - 15.8;
    string level;

    printf("%f\n", index);

    /*if (index > 16)
    {
        printf("Grade 16+\n");
    }
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        //int rounded = round(level);
        printf("Grade %f\n", index);
    } */

   /* int words = checkWords(userInput);
    printf("%i letters(s) \n", letterCount);
    printf("%i word(s) \n", checkWords(userInput));
    printf("%i sentence(s) \n", checkSentence(userInput));*/
}

int checkChar(char input)
{
    if (isalpha(input) == 0)
    {
        return -1;
    }
    else return 0;
}

int checkWords(string input)
{
    int wordCount = 0;
    for(int i = 0, n = strlen(input); i < n; i++)
    {
        if (isspace(input[i]) != 0)
        {
            wordCount++;
        }
    }
    wordCount++;
    return wordCount;
}

int checkSentence(string input)
{
    int sentenceCount = 0;
    char period = '.';
    char ex = '!';
    char ques = '?';
    for(int i = 0, n = strlen(input); i < n; i++)
    {
        char compare = input[i];
        if(compare == period || compare == ex || compare == ques)
        {
            sentenceCount++;
        }
    }
    return sentenceCount++;
}