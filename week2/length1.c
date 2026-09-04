#include<stdio.h>
#include<cs50.h>

int string_length(string s);//name = "eva"  ───────────→  s = "eva"

int main(void){


//create an integer 
    string name = get_string("name: ");// польз вводит имя name = eva
//create a function 
    int length = string_length (name);//отправляем ева в функцию
    printf("%i\n", length);
}

    //десь s — это имя параметра функции name → s
    // Count number of characters up until '\0' (aka NUL)
int string_length(string s){

    int n = 0;
    while (s[n] != '\0' ){
        n++;
    } //ева  = 3 = length
return n;
}