// an elevator system has to process the user requests depending upon energy usuage nd safety measures total floors are 20 if the requested floor is outside the range 1-20 then print invalid floor request
// if the requested floor is the same as the current floor then print already here otherwise move the elevator nd calculate 
// 1. the movment direction upwards  and the number of floor moved , energy usage 2 units per floor used up 
// if the movement is greather than 10 floors print cooling delay pls wait 
// #include <stdio.h>
// #include <stdlib.h>

// void processElevatorRequest(int currentFloor, int requestedFloor) {
//     // Check for invalid request
//     if (requestedFloor < 1 || requestedFloor > 20) {
//         printf("Invalid floor request\n");
//         return;
//     }

//     // Check if already on the same floor
//     if (requestedFloor == currentFloor) {
//         printf("Already here\n");
//         return;
//     }

//     // Determine direction and calculate values
//     int floorsMoved = abs(requestedFloor - currentFloor);
//     int energyUsed = floorsMoved * 2;
//     const char* direction = (requestedFloor > currentFloor) ? "Up" : "Down";

//     // Output movement details
//     printf("Requested floor: %d\n", requestedFloor);
//     printf("Moving %s by %d floors\n", direction, floorsMoved);
//     printf("Energy used: %d units\n", energyUsed);

//     // Cooling delay warning
//     if (floorsMoved > 10) {
//         printf("Cooling delay, please wait...\n");
//     }
// }

// int main() {
//     int currentFloor, requestedFloor;

//     printf("Enter current floor (1-20): ");
//     scanf("%d", &currentFloor);

//     printf("Enter requested floor (1-20): ");
//     scanf("%d", &requestedFloor);

//     processElevatorRequest(currentFloor, requestedFloor);

//     return 0;
// }
// you have to simulate the lock pattern veirfication system using loops if the number is even and divisible by 4 it contributes to +3 points if thenumber is odd and a prime number 
// it contributes +5 points if the number is neagtive then the system immideatly stops processing inputs , if the number is 0 then the system skip it without processing you have to determine weither the lock can be unlocked or not ,
// the lock open only if the total score is atleast 30 output will be unlock unlock nd the total score , second output <30 access denied , threat dedeted 
// #include <stdio.h>
// #include <stdbool.h>

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num < 2)
//         return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int num;
//     int score = 0;

//     printf("Enter numbers for lock pattern verification (negative to stop):\n");

//     while (1) {
//         scanf("%d", &num);

//         if (num < 0) {
//             printf("Negative number entered. System stopped.\n");
//             break;
//         }

//         if (num == 0) {
//             // Skip 0
//             continue;
//         }

//         if (num % 2 == 0 && num % 4 == 0) {
//             score += 3;
//         } else if (num % 2 != 0 && isPrime(num)) {
//             score += 5;
//         }
//     }

//     printf("Total Score: %d\n", score);

//     if (score >= 30) {
//         printf("Unlock\n");
//     } else {
//         printf("Access Denied, Threat Detected\n");
//     } 
//     return 0;
// }
