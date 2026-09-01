// Uppercases a string

#include <cs50.h>
#include<ctype.h>//библиотека для функций 
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)//считает количество символов до \0
    {
        if (islower (s[i]))//Текущий символ является маленькой буквой
        {
            printf("%c", toupper(s[i]));//toupper превращает эту букву в большую
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}