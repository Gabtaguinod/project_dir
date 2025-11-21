//TAGUINOD GABRIEL D. DIT 1-2

#include <stdio.h>

int main(void) {
    
    int i = 1;
    printf("While Loop: Numbers from 1 to 10\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    
    printf("For Loop: Even numbers from 2 to 20\n");
    for (int j = 2; j <= 20; j += 2) {
        printf("%d ", j);
    }
    printf("\n\n");

    
    int k = 1;
    printf("Do-While Loop: Numbers from 1 to 5\n");
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n\n");

    
    int num;
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    printf("ForPulling");

    return 0;