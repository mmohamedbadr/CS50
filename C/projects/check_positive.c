#include <cs50.h>
#include <stdio.h>


int checkPositiveNumber (void);
int main(void){
    int i  = checkPositiveNumber();
    printf("Number is  %i \n",i);
}

int checkPositiveNumber(void){
    int i;
    do{
         i = get_int("Enter Positive Number !\n");
    }
    while(i<0);
    return i;
}
