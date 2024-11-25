#include <stdio.h>
int main(){
//    float price[3];

//    printf("enter the prices :");
//    scanf("%f", &price[0]);
//    scanf("%f", &price[1]);
//    scanf("%f", &price[2]);

//    printf("total price of 0 item is: %f", price[0]+(0.18*price[0]));
//    printf("total price of 1 item is: %f", price[1]+(0.18*price[1]));
//    printf("total price of 2 item is: %f", price[2]+(0.18*price[2]));
// 

int age =89;
int *ptr = &age;
printf("the age pointer is : %u\n",ptr);
ptr++;
printf("the age pointer is :%u \n", ptr);
ptr--;
printf("%u", ptr);
}