#include <stdio.h>
int main(){
    int i,j;
    char a;
    for(i=0; i<=5;i++){
        for(j=0; j<=i ; j++){
            printf("* ");
        }
        printf("\n");
    }
}