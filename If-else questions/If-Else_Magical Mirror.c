#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num<=0){
        printf("The verdict for the number %d is: INVALID",num);
        return 0;
    }
        
    int c1=(num%2==0 && num>10);
    int c2=(num%3==0 && num>15);
    int c3=(num%7==0);
    
    if (c1 && c2 && c3){
        printf("The verdict for the number %d is: SUPERNATURAL ",num);
    }
    else if ((c1&&c2)||(c1&&c3)||(c2&c3)){
             printf("The verdict for the number %d is: MIRACULOUS ",num);
    }
    else if (c1||c2||c3){
        printf("The verdict for the number %d is: MAGICAL",num);
    }
    else{
        printf("The verdict for the number %d is: NORMAL",num);
    }  
     
    return 0;
}