#include<stdio.h>
#include<cs50.h>

float average (int length, int numbers[]){//average( 3, [72, 73, 33] )
       
    //int length — сколько чисел в массиве.
    //int numbers[] — сам массив чисел.

        int sum =0; 

        for (int i = 0; i < length; i++ ){

            sum = sum + numbers[i];
        }
       
        return (float) sum/length;
    }

int main (void){

    const int n = 3;
    int scores [n];
  
    for ( int i = 0; i < n; i++ ){//i — это только номер ячейки
        scores [i] = get_int (" score: ");
    }
    printf ( " avarage : %f\n" , average(n, scores)); // n - 3; scores → [72, 73, 33]
}