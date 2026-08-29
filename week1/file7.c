#include<stdio.h>
#include<cs50.h>


    void meow (int n);
    int main (void) {//здесь void в скобках означает, что main не получает параметров.
        meow(5); // int вызвала функцию мяу с числом 5
    }

void meow (int n){
    for ( int i = 0; i <= n; i++){
        printf ("meow\n");
    }
}
