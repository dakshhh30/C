// 2.A character is entered through keyboard, WAP to determine whether
//  the character is entered capital, small, digit or special character.

#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Determine the type of character
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is a capital letter.\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a small letter.\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    } 
    else {
        printf("The character is a special character.\n");
    }

    return 0;
}
