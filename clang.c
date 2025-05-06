// // #include <stdio.h>
// // int main(){
// //     int a;
// //     printf("Enter the number: ");
// //     scanf("%d", &a);
// //     if (a%5==0 && a%3==0)
// //     {
// //         printf("divisible by 5 and 3");
// //     }
// //     else
// //     {
// //         printf("Not divisible by 5 and 3");
// //     }
    
// //     return 0;
// // }


// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d", &n);
// //     int hasPrinted = 0;
// //     while (n > 0) {
// //         int digit = n % 10;
// //         n /= 10;
// //         if (digit == 0 && hasPrinted == 0)
// //         {
// //             continue;
// //         }
// //         printf("%d", digit);
// //         hasPrinted = 1;
// //         if (n == 0)
// //         {
// //             break;
// //         }
// //     }
// //     return 0;
// // }




// // #include <stdio.h>
// // int main(){
    
// // }




// // #include <stdio.h>
// // int main(){
    
// // }




// // #include <stdio.h>
// // int main(){
    
// // }




// // #include <stdio.h>
// // int main() {
// //     int start, end, sum = 0;
// //     printf("Enter the start range: ");
// //     scanf("%d", &start);
// //     printf("Enter the end range: ");
// //     scanf("%d", &end);
// //     for (int i = start; i <= end; i++) 
// //         if (i % 9 == 0) 
// //             sum += i;
// //     printf("Sum of numbers divisible by 9: %d\n", sum);
// //     return 0;
// // }




// // #include <stdio.h>
// // int main() {
// //     int n;
// //     double sum = 0.0;
// //     printf("Enter: ");
// //     scanf("%d", &n);
// //     for (int i = 1; i <= n; i++) 
// //         sum += 1.0 / i;
// //     printf("Sum of harmonic series: %.6f\n", sum);
// //     return 0;
// // }




// // #include <stdio.h>
// // int main() {
// //     int n;
// //     printf("Enter a number: ");
// //     scanf("%d", &n);
// //     for (int i = 1; i <= n; i++) 
// //         printf("%d\n", i * i * i);
// //     return 0;
// // }



// // #include <stdio.h>
// // int main() {
// //     int pin, enteredPin, attempts = 0, isLocked = 0;
// //     float balance = 5000.0, withdrawalAmount;
// //     pin = 1234;
// //     while (attempts < 3) {
// //         printf("Enter your 4-digit PIN: ");
// //         scanf("%d", &enteredPin);
// //         if (enteredPin == pin) {
// //             printf("pin verified.\n");
// //             break;
// //         } else {
// //             printf("wrong pin. Try again.\n");
// //             attempts++;
// //         }
// //     }
// //     if (attempts == 3) {
// //         printf("many invalid attempts.\n");
// //         isLocked = 1;
// //     }
// //     if (!isLocked) {
// //         printf("Enter withdrawal amount: ");
// //         while (1) {
// //             scanf("%f", &withdrawalAmount);
// //             if ((int)withdrawalAmount % 100 != 0) {
// //                 printf("Invalid amount. Please enter a multiple of 100: ");
// //             } else if (withdrawalAmount > balance) {
// //                 printf("Insufficient balance. Enter less amount: ");
// //             } else {
// //                 balance -= withdrawalAmount;
// //                 printf("Transaction successful. Updated balance: %.2f\n", balance);
// //                 break;
// //             }
// //         }
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     int len=0;
//     while (str[len] != '\0') {
//         len++;
//     }
//     printf("Length of the string: %d\n", len);
//     char *reversed = (char *)malloc((len + 1) * sizeof(char));
//     if (reversed == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0; i < len; i++) {
//         reversed[i] = str[len - 1 - i];
//     }
//     reversed[len] = '\0';
//     printf("Reversed string: %s\n", reversed);
//     free(reversed);
//     return 0;
// }