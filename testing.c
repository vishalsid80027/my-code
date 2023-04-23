#include<stdio.h>
int x=1;     // global variable
int main(){
    int x=2;
   printf("%d",::x);
    return 0;
}