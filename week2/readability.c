#include<ctype.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main (void){
    
    string text = get_string ("Text:\n");
    
    // вызываем фуекции и сохраняем резкльтат
    int letters = count_letters(text);// результат от функции сохраниться в эту переменную 
    int words = count_words(text);
    int sentences = count_sentences(text);

    //счиитаем L and S
    float L = ( (float) letters/words) * 100;
    float S = ( (float) sentences/words) * 100;
    float index = 0.0588*L - 0.296*S - 15.8;
    int X = round(index);

    if ( X < 1){

     printf("Before Grade 1 ");

    } else if ( X >= 16){ 

        printf("Grade 16+");

    } else{

       printf("Grade %i\n",X); 
    } 
}

int count_letters(string text){

    int letters = 0;
    for (int i = 0, n = strlen(text); i < n; i++){
    //n — сколько всего символов в строке;
      if (isalpha(text[i] )){ // если каждый символ буква 
        letters++;// то увеличиваем 
         } 
    }
    return letters;
}

int count_words(string text){

    int spaces = 0;

    for (int i = 0, n = strlen(text); i < n; i++ ){
        if(text[i] == ' '){
            spaces++;
        }
   }
   int words = spaces + 1;
   return words;
}
int count_sentences(string text){ 

    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++){
       if( text[i] == '!' || text[i] == '?' || text[i] == '.'){
        sentences++;
       }
    }
    return sentences;
}