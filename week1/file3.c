#include<stdio.h>
#include<cs50.h>
int main (void){

    int x = get_int("what is x? ");
    int y = get_int (" what is y ? ");

    int z = x + y;

    printf ( "%i\n", z);
}