#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    
    (num &1)? printf("Odd") : printf("Even");
      
    return 0;
}