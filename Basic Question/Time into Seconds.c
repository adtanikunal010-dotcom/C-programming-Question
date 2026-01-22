#include <stdio.h>
int toSeconds(int h, int m, int s) 
{
    return h*3600+m*60+s;
}

int main() {
    int h,m,s;
    scanf("%d %d %d",&h ,&m,&s);
   int sum= toSeconds(h,m,s);
    printf("Total seconds: %d",sum);
     
    return 0;
}
