#include <stdio.h>
#include <cs50.h>

int main (void){    
    int i = get_int("Enter iteration number: \n");
    while(i>0){
        printf("Iteration %i \n",i);
        i--;
    }
}
