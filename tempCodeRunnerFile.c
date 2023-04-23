#include<stdio.h>
int x=1;     // global variable
int main(void){
    int y;  // local variable   
    {
        int x=0;
    
        y=x-1;       //  y=0-1->   -1 because(x=0)                     
        if(y)
        printf("%d",x+y);
    }
    return 0;
}