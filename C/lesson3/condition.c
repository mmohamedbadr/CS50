#include <stdio.h>
#include <cs50.h>

int main(void){
    int firstNumber = get_int(" Enter first number:\n");
    int secondNumber = get_int(" Enter second number:\n");

    if(firstNumber<secondNumber){
        printf("Hello, %i < %i \n",firstNumber,secondNumber);
    }else if(firstNumber>secondNumber){
        printf("Hello, %i > %i \n",firstNumber,secondNumber);
    }else{
        printf("Hello, %i = %i \n",firstNumber,secondNumber);
    }
}
