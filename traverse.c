#include <stdio.h>
int main(){


int hum [6];

int *ptr = &hum[0];
for(int i =0; i<6; i++){
    printf("%d index : ",i);
    scanf("%d",&hum[i]);
}

for(int i =0 ; i<6; i++){
    printf("index : %d \n",hum[i]);
}
}