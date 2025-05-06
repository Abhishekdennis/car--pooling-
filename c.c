// an elevator system has to process the user requests depending upon energy usuage nd safety measures total floors are 20 if the requested floor is outside the range 1-20 then print invalid floor request
// if the requested floor is the same as the current floor then print already here otherwise move the elevator nd calculate 
// 1. the movment direction upwards  and the number of floor moved , energy usage 2 units per floor used up 
// if the movement is greather than 10 floors print cooling delay pls wait 
#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int num;
    int score = 0;

    printf("Enter numbers for lock pattern verification (negative to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative number entered. System stopped.\n");
            break;
        }

        if (num == 0) {
            // Skip 0
            continue;
        }

        if (num % 2 == 0 && num % 4 == 0) {
            score += 3;
        } else if (num % 2 != 0 && isPrime(num)) {
            score += 5;
        }
    }

    printf("Total Score: %d\n", score);

    if (score >= 30) {
        printf("Unlock\n");
    } else {
        printf("Access Denied, Threat Detected\n");
    } 
    return 0;
}
// #include <stdio.h>
// int main ()
// {
// int a[5] = {5, 1, 15, 20, 25};
// int i, j, m;

// i = ++a[1];  
// j = a[1]++;  
// m = a[i++];  
// printf("%d",i);
// printf("%d",j);
// printf("%d",m);
// }
// #include <stdio.h>
// int main() {
//     int n, m;
//     printf("Enter number of candidates: ");
//     scanf("%d", &n);
//     int candidate_ids[n];
//     int vote_count[n];
//     printf("Enter candidate IDs:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &candidate_ids[i]);
//         vote_count[i] = 0;
//     }
//     printf("Enter number of votes: ");
//     scanf("%d", &m);
//     int invalid_votes = 0;
//     printf("Enter the votes (candidate IDs):\n");
//     for (int i = 0; i < m; i++) {
//         int vote;
//         scanf("%d", &vote);
//         int valid = 0;
//         for (int j = 0; j < n; j++) {
//             if (vote == candidate_ids[j]) {
//                 vote_count[j]++;
//                 valid = 1;
//                 break;
//             }
//         }
//         if (!valid) {
//             invalid_votes++;
//         }
//     }
//     printf("\nVote count:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d - %d\n", candidate_ids[i], vote_count[i]);
//     }
//     printf("Invalid votes: %d\n", invalid_votes);
//     int max_votes = -1, winner_index = -1, tie = 0;
//     for (int i = 0; i < n; i++) {
//         if (vote_count[i] > max_votes) {
//             max_votes = vote_count[i];
//             winner_index = i;
//             tie = 0;
//         } else if (vote_count[i] == max_votes) {
//             tie = 1;
//         }
//     }
//     if (tie) {
//         printf("Result: It's a tie\n");
//     } else {
//         printf("Winner: %d\n", candidate_ids[winner_index]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main (){
//     int rows , columns;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &rows, &columns);
//     int matrix[rows][columns];
//     printf("Enter the elements of the matrix:\n");
//     for (int i =0; i < rows; i++){
//         for (int j = 0; j < columns; j++){
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }


how are you doing there !!