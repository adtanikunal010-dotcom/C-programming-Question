#include <stdio.h>


int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    int newhour;
    
    if(h==0){
        newhour = 12;
    }
    else if(h < 12){
        newhour = h;
    }
    else if(h > 12){
        newhour = h-12;
    }
    printf("%d:%02d %s",newhour,m, (h<12? "AM" : "PM"));
    
    return 0;
}
