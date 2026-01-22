#include <stdio.h>

int main() {
    int n;
    scanf("%d" ,&n);
    
    if(n<0){
        printf("Invalid Input!");
        return 0;
    }
    float amount =0;
    float bill =0;
    
    if (n<=100){
        amount = (n*5);    
    }else if(n<=300){
       amount  = (100*5) + (n-100)*7;   
    }else if(n>300){
        amount = (100*5) + (200*7) + (n-300)*10;   
    }
    
    if (amount<=1200){
        bill= amount - (amount*0.10);
    }else if (amount >1200){
        bill=amount;
         }
    printf("The electricity bill is: %.2f.", bill);

    
    return 0;
}