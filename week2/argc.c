#include<stdio.h>
#include<cs50.h>

//argc = argument count — количество аргументов/ сколько
//Когда запускаешь программу, дай мне количество аргументов (argc) 
//и массив всех аргументов (argv)/ что именно
//argv[0] = ./argc - первый аргумент 
//argv[1] = Eva - второй 
int main (int argc, string argv[]){// командные аргументы 

    printf("hello, %s\n", argv[1]);
}