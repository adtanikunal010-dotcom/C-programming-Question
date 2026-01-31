#include <stdio.h>

int main() {
        int n;
        scanf("%d" ,&n);
        int count=0;
        int i=n&15;
        while(i>0){
                count += i&1;
                i=i>>1;
        }
        printf("%d",count);
           
    return 0;
}