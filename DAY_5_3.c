#include <stdio.h>
#include <conio.h>

int main(){
    char character;
    int assci;
    //clrscr();

    printf("Enter a Character: ");
    scanf("%c",&character);

    assci = character;
    if(assci>=65 && assci <=90 || assci >=97 && assci<=122){
        printf("character %c Is a Alphabet",character);
    }else{
        printf("character %c Is not a Alphabet",character);
    }
    getch();
    return 0;
}