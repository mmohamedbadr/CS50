#include <stdio.h>
#include <cs50.h>

int  main(void){

    int itemsCount = get_int("Enter Items Count \n");
    float totalItemsPrice = 0;
    if(itemsCount > 0){
        for(int i =0;i< itemsCount;i++){
           float itemPrice = get_float("Product %i price: \n",i+1) ;
           totalItemsPrice +=itemPrice;
        }        
    } 
    printf("Total price With taxes %.2f $ \n",totalItemsPrice*1.4);
}
