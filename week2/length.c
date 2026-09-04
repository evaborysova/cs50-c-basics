#include<stdio.h>
#include<cs50.h>

int main (void){

    string name = get_string (" nsme: ");

    int n = 0;// позиция символа в строке + счетчик кол-ва найденных символов 
    while (name[n] != '\0'){
        n++;
    }
    printf("%i\n", n);
}