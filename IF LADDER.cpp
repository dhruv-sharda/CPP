// Q1. Accept 3 numbers and find minimum

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a < b && a < c)
//         cout << "Minimum = " << a << endl;
//     else if (b < c)
//         cout << "Minimum = " << b << endl;
//     else
//         cout << "Minimum = " << c << endl;

//     return 0;
// }

// output

// Enter three numbers: 2
// 5
// 9
// Minimum = 2

// Q5. Accept 2 numbers and select one choice

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, choice;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Choose operation:\n";
//     cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     if (choice == 1)
//         cout << "Sum = " << a + b << endl;
//     else if (choice == 2)
//         cout << "Difference = " << a - b << endl;
//     else if (choice == 3)
//         cout << "Product = " << a * b << endl;
//     else if (choice == 4) {
//         if (b != 0)
//             cout << "Quotient = " << (float)a / b << endl;
//         else
//             cout << "Error! Division by zero." << endl;
//     } else
//         cout << "Invalid choice!" << endl;

//     return 0;
// }

// output

// Enter two numbers: 10
// 20
// Choose operation:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// Enter your choice: 1
// Sum = 30
