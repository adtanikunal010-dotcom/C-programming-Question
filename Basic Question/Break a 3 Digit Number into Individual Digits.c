#include <stdio.h>
void split(int n, int *A, int *B, int *C){
    *A = n/100;
    *B = (n / 10) %10;
    *C = n % 10;
}

int main() {
    int n, A, B, C;
 
    scanf("%d" , &n);
    
    split( n, &A, &B, &C);
    printf("%d %d %d", A , B, C);
    
    return 0;
       
}
