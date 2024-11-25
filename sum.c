#include <stdio.h>
int main(){
    int a,b,result,n,i;
    printf("enter the numbers");
    scanf("%d", &n);
    
    a= 0;
    b=1;
    
    for(i = 1; i<=n; i++){
        result = a+b;
        a=b;
        b = result;
    }
    printf("%d", result);
}