#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1,&num2);
    int last1 = num1 -(num1 / 10)*10;
    int last2 = num2 -(num2 /10)*10;
    
    if(last1==last2){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
