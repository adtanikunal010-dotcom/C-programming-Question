#include <stdio.h>

int main() {
    char lowercase;
    char uppercase;

    scanf("%c", &lowercase);
    uppercase= lowercase - 32;
    
    printf("The uppercase of %c is %c" ,lowercase , uppercase);
    return 0;
}
 