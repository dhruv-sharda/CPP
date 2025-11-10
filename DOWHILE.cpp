// 1. Count Positive, Negative, and Zero Numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int positive_count = 0;
//     int negative_count = 0;
//     int zero_count = 0;
//     int num;
//     int count = 0;

//     do {
//         cout << "Enter a number: ";
//         cin >> num;

//         if (num > 0) {
//             positive_count++;
//         } else if (num < 0) {
//             negative_count++;
//         } else {
//             zero_count++;
//         }
//         count++;
//     } while (count < 10);

//     cout << "Positive numbers: " << positive_count << endl;
//     cout << "Negative numbers: " << negative_count << endl;
//     cout << "Zeroes: " << zero_count << endl;

//     return 0;
// }

// output

// Enter a number: 10
// Enter a number: 50
// Enter a number: 45
// Enter a number: 67
// Enter a number: 96
// Enter a number: 29
// Enter a number: 45
// Enter a number: 98
// Enter a number: 45
// Enter a number: 12
// Positive numbers: 10
// Negative numbers: 0
// Zeroes: 0

// 2. Find and Display the Minimum Number

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int min_num;
//     int count = 0;

//     do {
//         cout << "Enter a number: ";
//         cin >> num;

//         if (count == 0) {
//             min_num = num;
//         } else if (num < min_num) {
//             min_num = num;
//         }
//         count++;
//     } while (count < 10);

//     cout << "The minimum number is: " << min_num << endl;

//     return 0;
// }

// output

// Enter a number: 10
// Enter a number: 12
// Enter a number: 12
// Enter a number: 34
// Enter a number: 67
// Enter a number: 54
// Enter a number: 34
// Enter a number: 75
// Enter a number: 78
// Enter a number: 45
// The minimum number is: 10


// 3. Find and Display the Maximum Number

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int max_num;
//     int count = 0;

//     do {
//         cout << "Enter a number: ";
//         cin >> num;

//         if (count == 0) {
//             max_num = num;
//         } else if (num > max_num) {
//             max_num = num;
//         }
//         count++;
//     } while (count < 10);

//     cout << "The maximum number is: " << max_num << endl;

//     return 0;
// }

// output

// Enter a number: 12
// Enter a number: 23
// Enter a number: 45
// Enter a number: 67
// Enter a number: 89
// Enter a number: 12
// Enter a number: 34
// Enter a number: 57
// Enter a number: 86
// Enter a number: 45
// The maximum number is: 89


// 4. Count Odd and Even Numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int even_count = 0;
//     int odd_count = 0;
//     int num;
//     int count = 0;

//     do {
//         cout << "Enter a number: ";
//         cin >> num;

//         if (num % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
//         count++;
//     } while (count < 10);

//     cout << "Even numbers: " << even_count << endl;
//     cout << "Odd numbers: " << odd_count << endl;

//     return 0;
// }

// output

// Enter a number: 45
// Enter a number: 65
// Enter a number: 24
// Enter a number: 75
// Enter a number: 24
// Enter a number: 67
// Enter a number: 86
// Enter a number: 445
// Enter a number: 34

// Even numbers: 5
// Odd numbers: 5

// 5. Armstrong Number Check

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int num, original_num, remainder, n = 0, sum = 0;

//     cout << "Enter an integer: ";
//     cin >> num;

//     original_num = num;

//     // Count the number of digits
//     while (original_num != 0) {
//         original_num /= 10;
//         ++n;
//     }

//     original_num = num;

//     // Calculate the sum of powers of digits
//     while (original_num != 0) {
//         remainder = original_num % 10;
//         sum += pow(remainder, n);
//         original_num /= 10;
//     }

//     // Check if the number is Armstrong
//     if (sum == num)
//         cout << num << " is an Armstrong number." << endl;
//     else
//         cout << num << " is not an Armstrong number." << endl;

//     return 0;
// }

// output

// Enter an integer: 20
// 20 is not an Armstrong number

// 6. Prime Number Check

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int num;
//     bool is_prime = true;

//     cout << "Enter a positive integer: ";
//     cin >> num;

//     // A prime number must be greater than 1
//     if (num <= 1) {
//         is_prime = false;
//     } else {
//         // Check for divisibility from 2 up to the square root of the number
//         for (int i = 2; i <= sqrt(num); i++) {
//             if (num % i == 0) {
//                 is_prime = false;
//                 break; // Exit the loop as soon as a divisor is found
//             }
//         }
//     }

//     if (is_prime)
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;

//     return 0;
// }

// output

// Enter a positive integer: 10
// 10 is not a prime number.

// 7. Palindrome

// #include <iostream>
// using namespace std;

// int main() {
//     int n, reversed_n = 0, remainder, original_n;

//     cout << "Enter an integer: ";
//     cin >> n;

//     original_n = n;

//     // Reverse the number
//     while (n != 0) {
//         remainder = n % 10;
//         reversed_n = reversed_n * 10 + remainder;
//         n /= 10;
//     }

//     // Check if the number is a palindrome
//     if (original_n == reversed_n) {
//         cout << original_n << " is a palindrome number." << endl;
//     } else {
//         cout << original_n << " is not a palindrome number." << endl;
//     }

//     return 0;
// }

// output

// Enter an integer: 7
// 7 is a palindrome number.