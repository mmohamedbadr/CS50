#include <stdio.h>
#include <cs50.h>
int main(void){

    int number = get_int("Enter number \n");
    if(number%2==0){
        printf("Number %i is Even number\n",number);
    }else{
        printf("Number %i is Odd number\n",number);
    }
}
