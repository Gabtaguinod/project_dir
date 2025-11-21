//TAGUINOD GABRIEL D. DIT 1-2

#include <stdio.h> 

int main(void) { 
int num1 = 10; int num2 = 5; 
int sum, difference, product, quotient; 

sum = num1 + num2; difference = num1 - num2; 
product = num1 * num2; quotient = num1 / num2; 

printf("Arithmetic Operations:\n"); 
printf("%d + %d = %d\n", num1, num2, sum); 
printf("%d - %d = %d\n", num1, num2, difference); 
printf("%d * %d = %d\n", num1, num2, product); 
printf("%d / %d = %d\n\n", num1, num2, quotient); 
printf("Logical Operations:\n"); 
printf("(num1 > num2) && (num1 != 0): %d\n", (num1 > num2) && (num1 != 0)); // AND 
printf("(num1 < num2) || (num2 == 5): %d\n", (num1 < num2) || (num2 == 5)); // OR 
printf("!(num1 == num2): %d\n\n", !(num1 == num2)); 
printf("Assignment Operations:\n"); num1 += 3; num2 *= 2; 
printf("After updating: num1 = %d, num2 = %d\n", num1, num2); 

return 0;

 }