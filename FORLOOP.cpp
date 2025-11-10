// 1. Accept 10 Numbers and Display the First Even Number

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     bool found_even = false;

//     for (int i = 0; i < 10; ++i) {
//         cout << "Enter number " << i + 1 << ": ";
//         cin >> num;
//         if (num % 2 == 0) {
//             cout << "The first even number is: " << num << endl;
//             found_even = true;
//             break;
//         }
//     }

//     if (!found_even) {
//         cout << "No even number was entered." << endl;
//     }

//     return 0;
// }

// output
// Enter number 1: 3
// Enter number 2: 4
// The first even number is: 4


// 2. Accept 10 Numbers and Display the Table of Each

// #include <iostream>
// using namespace std;

// int main() {
//     int num;

//     for (int i = 0; i < 10; ++i) {
//         cout << "Enter a number to get its multiplication table: ";
//         cin >> num;

//         cout << "Multiplication table for " << num << ":\n";
//         for (int j = 1; j <= 10; ++j) {
//             cout << num << " * " << j << " = " << num * j << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// output

// Multiplication table for 9:
// 9 * 1 = 9
// 9 * 2 = 18
// 9 * 3 = 27
// 9 * 4 = 36
// 9 * 5 = 45
// 9 * 6 = 54
// 9 * 7 = 63
// 9 * 8 = 72
// 9 * 9 = 81
// 9 * 10 = 90

// Enter a number to get its multiplication table: 4
// Multiplication table for 4:
// 4 * 1 = 4
// 4 * 2 = 8
// 4 * 3 = 12
// 4 * 4 = 16
// 4 * 5 = 20
// 4 * 6 = 24
// 4 * 7 = 28
// 4 * 8 = 32
// 4 * 9 = 36
// 4 * 10 = 40

// Enter a number to get its multiplication table: 5
// Multiplication table for 5:
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50

// Enter a number to get its multiplication table: 6
// Multiplication table for 6:
// 6 * 1 = 6
// 6 * 2 = 12
// 6 * 3 = 18
// 6 * 4 = 24
// 6 * 5 = 30
// 6 * 6 = 36
// 6 * 7 = 42
// 6 * 8 = 48
// 6 * 9 = 54
// 6 * 10 = 60

// Enter a number to get its multiplication table: 8
// Multiplication table for 8:
// 8 * 1 = 8
// 8 * 2 = 16
// 8 * 3 = 24
// 8 * 4 = 32
// 8 * 5 = 40
// 8 * 6 = 48
// 8 * 7 = 56
// 8 * 8 = 64
// 8 * 9 = 72
// 8 * 10 = 80

// Enter a number to get its multiplication table: 9
// Multiplication table for 9:
// 9 * 1 = 9
// 9 * 2 = 18
// 9 * 3 = 27
// 9 * 4 = 36
// 9 * 5 = 45
// 9 * 6 = 54
// 9 * 7 = 63
// 9 * 8 = 72
// 9 * 9 = 81
// 9 * 10 = 90

// Enter a number to get its multiplication table: 1
// Multiplication table for 1:
// 1 * 1 = 1
// 1 * 2 = 2
// 1 * 3 = 3
// 1 * 4 = 4
// 1 * 5 = 5
// 1 * 6 = 6
// 1 * 7 = 7
// 1 * 8 = 8
// 1 * 9 = 9
// 1 * 10 = 10

// Enter a number to get its multiplication table: 4
// Multiplication table for 4:
// 4 * 1 = 4
// 4 * 2 = 8
// 4 * 3 = 12
// 4 * 4 = 16
// 4 * 5 = 20
// 4 * 6 = 24
// 4 * 7 = 28
// 4 * 8 = 32
// 4 * 9 = 36
// 4 * 10 = 40

// Enter a number to get its multiplication table: 6
// Multiplication table for 6:
// 6 * 1 = 6
// 6 * 2 = 12
// 6 * 3 = 18
// 6 * 4 = 24
// 6 * 5 = 30
// 6 * 6 = 36
// 6 * 7 = 42
// 6 * 8 = 48
// 6 * 9 = 54
// 6 * 10 = 60

// Enter a number to get its multiplication table: 3
// Multiplication table for 3:
// 3 * 1 = 3
// 3 * 2 = 6
// 3 * 3 = 9
// 3 * 4 = 12
// 3 * 5 = 15
// 3 * 6 = 18
// 3 * 7 = 21
// 3 * 8 = 24
// 3 * 9 = 27
// 3 * 10 = 30

// 3. Accept 10 Numbers and Display the Factorial of Each


#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter 10 numbers:" << endl;

    for (int i = 1; i <= 10; i++) {
        cin >> num;

        long long fact = 1;
        for (int j = 1; j <= num; j++) {
            fact = fact * j;
        }

        cout << "Factorial of " << num << " = " << fact << endl;
    }

    return 0;
}

// output

// Enter 10 numbers:
// 1
// Factorial of 1 = 1
// 2
// Factorial of 2 = 2
// 3
// Factorial of 3 = 6
// 4
// Factorial of 4 = 24
// 5
// Factorial of 5 = 120
// 6
// Factorial of 6 = 720
// 7
// Factorial of 7 = 5040
// 8
// Factorial of 8 = 40320
// 9
// Factorial of 9 = 362880
// 0
// Factorial of 0 = 1
