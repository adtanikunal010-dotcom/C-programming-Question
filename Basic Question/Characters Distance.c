#include <stdio.h>

int main() {
    char a;
    char c;

    scanf("%c %c", &a , &c);
    int d= c - a;

    printf("The distance between %c and %c is %d", a, c, d);
 
    return 0;
}
