#include <stdio.h>

int main() {
    int h, t;
    float c;
    scanf("%d %f %d", &h, &c, &t);
    
    int cond1=(h>50);
    int cond2=(c<0.7);
    int cond3=(t>5600);
    
    int grade;
    int count= cond1+cond2+cond3;
    
    if(count==3){
        grade=10;
    }
    else if(cond1 && cond2){
        grade=9;
    }
    else if(cond2 && cond3){
        grade=8;
    }
    else if(cond1 && cond3){
        grade=7;
    }
     else if(count==1){
        grade=6;
    }
    else{
        grade=5;
    }
    printf("The grade of the steel is: %d\n", grade);
    
    if(count==3){
        printf("All of the conditions met.");
    }
    else if(count==2){
        printf("Two conditions met.");
    }
    else if(count==1){
        printf("Only one condition met.");
    }
    else{
        printf("None of the conditions met.");
    }
    

    return 0;
}