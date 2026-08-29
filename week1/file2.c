#include<stdio.h>
#include<cs50.h>
int main (void){

    char c = get_char (" do u agree ? ");
    if ( c == 'y' || c == 'Y'){
        printf (" agreed \n "); 
    } else {
        printf ( " not agreed \n ");
    }
}