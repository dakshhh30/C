#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a= 40,b=50;
    printf("before swap a=%d & b=%d",a,b);
    swap(&a,&b);
    printf("after swap a=%d & b=%d",a,b);
}