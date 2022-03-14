#include <stdio.h>
#include <cs50.h>

int main(void){
    float productPrice = get_float("Enter product price!\n");
    printf("Product Price with Taxes = %.2f \n",productPrice+(productPrice*14/100));
}
