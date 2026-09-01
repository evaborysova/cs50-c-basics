#include<stdio.h>
#include<cs50.h>

int main ( int argc, string argv[]){

    if ( argc == 2){
        //argv[0] → "./argc"
        //argv[1] → "eva"

        printf(" hello, %s\n", argv[1]);
    } else {
        printf(" hello, world\n");
    }
}
// atgc = 3
//argv[0] → "./argc"
//argv[1] → "eva"
//argv[2] → "anna"