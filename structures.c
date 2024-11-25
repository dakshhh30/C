#include <stdio.h>
#include <string.h>

struct daksh{
    char Name[20];
    int roll;
    int marks;
};

int main(){
    struct daksh saini = {"Daksh Saini",2664,87};
    printf("students roll number : %d",saini.roll);

    struct daksh *ptr= &saini;
    printf("Roll number: %d",(*ptr).roll);
}