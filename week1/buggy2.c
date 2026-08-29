#include<cs50.h>
#include<stdio.h>

void print_column (int height);// gets number h but returns nothing

int main (void ){

    int h = get_int (" height :");
    print_column (h);// число из главной функции сохр в void функции 
}

void print_column(int height){

    for ( int i = 0; i <= height; i ++){
        printf("#\n");
    }
}