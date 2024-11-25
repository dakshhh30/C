#include <stdio.h>
int main(){
    int n;
    printf("enter the years");
    scanf("%d",&n);
    
    if(n % 4==0 || n % 100 == 0){
        printf("it is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
}