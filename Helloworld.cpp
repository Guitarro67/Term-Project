

#include <stdio.h>
#include <ctype.h>  

int main(void)
{
    char phone[100];
    int i;

    printf("Enter phone number: ");
    if (fgets(phone, sizeof(phone), stdin) == NULL) {
        return 1; 
    }

    printf("\nNumeric form: ");

    for (i = 0; phone[i] != '\0'; i++) {
        if (phone[i] == '\n')
            break;

        char c = toupper((unsigned char) phone[i]);

        if (c >= 'A' && c <= 'C') {
            putchar('2');
        }
        else if (c >= 'D' && c <= 'F') {
            putchar('3');
        }
        else if (c >= 'G' && c <= 'I') {
            putchar('4');
        }
        else if (c >= 'J' && c <= 'L') {
            putchar('5');
        }
        else if (c >= 'M' && c <= 'O') {
            putchar('6');
        }
        // P, R, S -> 7
        else if (c == 'P' || c == 'R' || c == 'S') {
            putchar('7');
        }
        else if (c >= 'T' && c <= 'V') {
            putchar('8');
        }
        else if (c >= 'W' && c <= 'Y') {
            putchar('9');
        }
        else {
            putchar(phone[i]);
        }
    }

    printf("\n");

    return 0;
}
