#include <stdio.h>
int buildNumber(int a, int b, int c, int d){
    int num = a*1000 + b*100 + c*10 +d;
    return num*5;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int res = buildNumber(a,b,c,d);
    printf("The number is: %d", res);
    return 0; 
   
}
