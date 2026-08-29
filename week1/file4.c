//calculator3.c

#include<stdio.h>
#include<cs50.h>

int main (void){

    long dollars = 2;
    while ( true ){
        char c = get_char (" here is $%li. triple it and give it to the next person ", dollars);
        if ( c == 'y'){
            dollars *= 3;
        } else {
            break;
        }
    }
}