#include <stdio.h>
int sumLastDigits(int a, int b)
{
   return a%10+b%10 ;
}

int main() {
    int a, b;
    scanf("%d %d ", &a, &b);
    int res=sumLastDigits(a,b);
    printf("The sum of last digits is: %d",res);
       
    return 0;
}
