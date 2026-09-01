#include<stdio.h>
#include<cs50.h>

int main (){

    const int n = 3;
    int scores [n];
  
    for ( int i = 0; i < n; i++ ){
        scores [i] = get_int (" score: ");
    }
    printf ( " average : %f\n" , ( scores[0] + scores[1] + scores[2]) / 3.0);
}