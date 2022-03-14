#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void){

    char userAnswer = get_char("Are you want to complete a course ? (y/n)\n");
    if(tolower(userAnswer) == 'y'){
        printf("You are welcome!\n");
    }
    else if(tolower(userAnswer) == 'n'){
        printf("We will miss you!\n");
    }
    else{
        printf("Wrong Answer!!!\n");
    }
}
