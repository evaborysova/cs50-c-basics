 #include<stdio.h>
 #include<cs50.h>
 #include<string.h>

 int main (int argc, string argv[]){

//argv[0] → "./named"
//argv[1] → "Eva"
//argv[2] → "Ivanova"

//argv[1][0] → E
//argv[1][1] → v
//argv[1][2] → a

    for (int i = 1; i < argc; i++ ){
        printf("%c", argv[i][0]);
    }

 }