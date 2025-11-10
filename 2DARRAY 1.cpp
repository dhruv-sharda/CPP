// Q1: Program for a 3x3 matrix

// Tasks:

// 1. Add numbers, display matrix and sum.

// 2. Count positive & negative numbers.

// 3. Display maximum number.

// 4. Count prime, Armstrong, palindrome numbers.

// 5. Sum of each row.

// 6. Display sum of diagonals.

// 7. Transpose of matrix.

// 8. Sort all elements in ascending order.

// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// // --- Helper functions ---
// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0) return false;
//     return true;
// }

// bool isPalindrome(int n) {
//     int orig = n, rev = 0;
//     while (n > 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     return orig == rev;
// }

// bool isArmstrong(int n) {
//     int orig = n, sum = 0, digits = 0, temp = n;
//     while (temp > 0) { digits++; temp /= 10; }
//     temp = n;
//     while (temp > 0) {
//         int r = temp % 10;
//         sum += pow(r, digits);
//         temp /= 10;
//     }
//     return sum == orig;
// }

// // --- Main Program ---
// int main() {
//     int a[3][3];
//     int sum = 0, pos = 0, neg = 0;

//     // Input
//     cout << "Enter 3x3 matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> a[i][j];
//             sum += a[i][j];
//             if (a[i][j] >= 0) pos++; else neg++;
//         }
//     }

//     // Initialize maxi with first element
//     int maxi = a[0][0];
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             if (a[i][j] > maxi) maxi = a[i][j];

//     // Display Matrix
//     cout << "\nMatrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }

//     // (i) Sum of matrix
//     cout << "\nSum of all elements = " << sum << endl;

//     // (ii) Positive & Negative count
//     cout << "Positive count = " << pos << ", Negative count = " << neg << endl;

//     // (iii) Maximum number
//     cout << "Maximum element = " << maxi << endl;

//     // (iv) Prime, Armstrong, Palindrome counts
//     int primeCount = 0, armCount = 0, palCount = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (isPrime(a[i][j])) primeCount++;
//             if (isArmstrong(a[i][j])) armCount++;
//             if (isPalindrome(a[i][j])) palCount++;
//         }
//     }
//     cout << "Primes = " << primeCount 
//          << ", Armstrong = " << armCount 
//          << ", Palindrome = " << palCount << endl;

//     // (v) Row sums
//     for (int i = 0; i < 3; i++) {
//         int rsum = 0;
//         for (int j = 0; j < 3; j++) rsum += a[i][j];
//         cout << "Row " << i + 1 << " sum = " << rsum << endl;
//     }

//     // (vi) Diagonal sums
//     int d1 = 0, d2 = 0;
//     for (int i = 0; i < 3; i++) {
//         d1 += a[i][i];
//         d2 += a[i][2 - i];
//     }
//     cout << "Diagonal sums: main = " << d1 
//          << ", secondary = " << d2 << endl;

//     // (vii) Transpose
//     cout << "Transpose:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++)
//             cout << a[j][i] << " ";
//         cout << endl;
//     }

//     // (viii) Sorting all elements
//     int arr[9], idx = 0;
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             arr[idx++] = a[i][j];

//     sort(arr, arr + 9);
//     cout << "Sorted elements:\n";
//     for (int i = 0; i < 9; i++) cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// output

// Enter 3x3 matrix:
// 2
// 3
// 5
// 6
// 7
// 8
// 9
// 8 
// 5

// Matrix:
// 2 3 5
// 6 7 8
// 9 8 5

// Sum of all elements = 53
// Positive count = 9, Negative count = 0
// Maximum element = 9
// Primes = 5, Armstrong = 9, Palindrome = 9
// Row 1 sum = 10
// Row 2 sum = 21
// Row 3 sum = 22
// Diagonal sums: main = 14, secondary = 21
// Transpose:
// 2 6 9
// 3 7 8
// 5 8 5
// Sorted elements:
// 2 3 5 5 6 7 8 8 9



// Q2: Program for two 3x3 matrices

// Tasks:

// 1. Display sum of both into third.

// 2. Interchange values of both.

// 3. Matrix multiplication.

// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3], b[3][3], c[3][3];

//     cout << "Enter first 3x3 matrix:\n";
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             cin >> a[i][j];

//     cout << "Enter second 3x3 matrix:\n";
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             cin >> b[i][j];

//     // Sum into third
//     cout << "\nSum of matrices:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j] = a[i][j] + b[i][j];
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Interchange values
//     cout << "\nAfter interchange:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             int temp = a[i][j];
//             a[i][j] = b[i][j];
//             b[i][j] = temp;
//         }
//     }

//     cout << "Matrix A:\n";
//     for(int i=0;i<3;i++){ for(int j=0;j<3;j++) cout<<a[i][j]<<" "; cout<<endl; }
//     cout << "Matrix B:\n";
//     for(int i=0;i<3;i++){ for(int j=0;j<3;j++) cout<<b[i][j]<<" "; cout<<endl; }

//     // Multiplication
//     cout << "\nMultiplication:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j] = 0;
//             for(int k=0;k<3;k++)
//                 c[i][j] += a[i][k]*b[k][j];
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

 // output

// Enter first 3x3 matrix:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// Enter second 3x3 matrix:
// 12
// 34
// 56
// 78
// 89
// 12
// 34
// 56
// 78

// Sum of matrices:
// 13 36 59
// 82 94 18
// 41 64 87

// After interchange:
// Matrix A:
// 12 34 56
// 78 89 12
// 34 56 78
// Matrix B:
// 1 2 3
// 4 5 6
// 7 8 9

// Multiplication:
// 540 642 744
// 518 697 876
// 804 972 1140

