// 1. Accept 10 numbers in an array and display their addition

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10], sum = 0;

//     cout << "Enter 10 numbers: ";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     cout << "Sum of numbers = " << sum << endl;
//     return 0;
// }

// output

// Enter 10 numbers: 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 0
// 9
// Sum of numbers = 45


// 2. Accept 10 numbers and count two-digit even numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10], count = 0;

//     cout << "Enter 10 numbers: ";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//         if (arr[i] >= 10 && arr[i] <= 99 && arr[i] % 2 == 0)
//             count++;
//     }

//     cout << "Count of two-digit even numbers = " << count << endl;
//     return 0;
// }

// output

// Enter 10 numbers: 12                     
// 23
// 56
// 32
// 67
// 98
// 23
// 14
// 56
// 78
// Count of two-digit even numbers = 7


// 3. Count perfect, Armstrong, palindrome & prime numbers

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPerfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) sum += i;
//     }
//     return sum == n;
// }

// bool isArmstrong(int n) {
//     int temp = n, sum = 0, digits = 0;
//     while (temp) { digits++; temp /= 10; }
//     temp = n;
//     while (temp) {
//         sum += pow(temp % 10, digits);
//         temp /= 10;
//     }
//     return sum == n;
// }

// bool isPalindrome(int n) {
//     int rev = 0, temp = n;
//     while (temp) {
//         rev = rev * 10 + temp % 10;
//         temp /= 10;
//     }
//     return rev == n;
// }

// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int arr[10];
//     int perfectCount = 0, armstrongCount = 0, palindromeCount = 0, primeCount = 0;

//     cout << "Enter 10 numbers: ";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//         if (isPerfect(arr[i])) perfectCount++;
//         if (isArmstrong(arr[i])) armstrongCount++;
//         if (isPalindrome(arr[i])) palindromeCount++;
//         if (isPrime(arr[i])) primeCount++;
//     }

//     cout << "Perfect numbers count = " << perfectCount << endl;
//     cout << "Armstrong numbers count = " << armstrongCount << endl;
//     cout << "Palindrome numbers count = " << palindromeCount << endl;
//     cout << "Prime numbers count = " << primeCount << endl;

//     return 0;
// }

// output

// Enter 10 numbers: 2
// 3
// 5
// 7
// 8
// 2
// 3
// 5
// 7
// 9
// Perfect numbers count = 0
// Armstrong numbers count = 10
// Palindrome numbers count = 10
// Prime numbers count = 8
