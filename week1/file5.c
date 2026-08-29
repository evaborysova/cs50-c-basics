#include<stdio.h>
#include<cs50.h>

int main (void){

    int x = get_int ("what's x? ");
    int y = get_int (" what is y?");

    printf(" the answer is %i\n", x/y);
}