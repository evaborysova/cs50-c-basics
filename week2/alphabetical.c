#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <stdbool.h>

int main (void){

    string letters = get_string("input: ");
    bool alphabetical = true;
    int n = strlen(letters);

    //for отвечает только за проверку порядка 
    for ( int i = 0; i < n-1;  i++){//'a' < 'b' → TRUE

//letters[0 + 1] - переход на след букву в масиве 
//letters[1] → B

//if уже отвечает за итог
if (letters[i] > letters [i + 1]) {//Если текущая буква больше следующей — значит порядок нарушен

    alphabetical = false; }
  }

  if (alphabetical){
    printf("yes\n");
  } else {
    printf("no\n"); }
 }

