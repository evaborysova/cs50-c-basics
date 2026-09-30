#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main (void){

    string player1 = get_string ("1) type in your word\n"); //cat
    string player2 = get_string("2) type in your word\n"); // dog

    int length1 = strlen(player1);//2
    int length2 = strlen(player2);//3

    int score1 =0;
    int score2 =0;

    int points[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 }; // в массиве пишем именно баллы Scrabble

    for(int i = 0; i < length1; i++ ){

        char letter1 = toupper(player1[i]); // upper case funktion
        // ищем позицию буквы из масиве и сразу находим баллы за нее

        if(isalpha(letter1)){//функция из сtype - проверяет это буква или нет
            score1 = score1 + points[letter1 - 'A']; 
        }
        // a = 65; c = 67; 67-65=2 position in the array - 3 points 
}

    for(int i = 0; i < length2; i++ ){

    char letter2 = toupper(player2[i]);
    if (isalpha(letter2)){
          score2 = score2 + points[letter2 - 'A'];
    }
}
 if ( score1 > score2 ){

    printf("player 1 is a winner and the score is %i\n", score1);

 } else if ( score2 > score1 ){

    printf("player 2 is a winner and the score is %i\n", score2);

 } else {

    printf("it is a tie and the score is %i\n", score1); }
 
 }
 