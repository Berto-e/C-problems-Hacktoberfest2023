#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number == 0) {
        printf("The number is zero, which is not considered positive or negative.\n");
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
