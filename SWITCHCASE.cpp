// Q1. Program to check vowels using switch

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     switch (ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             cout << ch << " is a vowel." << endl;
//             break;
//         default:
//             cout << ch << " is NOT a vowel." << endl;
//     }

//     return 0;
// }

// output

// Enter a character: z
// z is NOT a vowel.

// Q2. Calculator using switch

// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char op;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;
//     cout << "Enter second number: ";
//     cin >> num2;

//     switch (op) {
//         case '+':
//             cout << "Result = " << num1 + num2 << endl;
//             break;
//         case '-':
//             cout << "Result = " << num1 - num2 << endl;
//             break;
//         case '*':
//             cout << "Result = " << num1 * num2 << endl;
//             break;
//         case '/':
//             if (num2 != 0)
//                 cout << "Result = " << num1 / num2 << endl;
//             else
//                 cout << "Error! Division by zero." << endl;
//             break;
//         default:
//             cout << "Invalid operator!" << endl;
//     }

//     return 0;
// }

// output

// Enter first number: 5
// Enter operator (+, -, *, /): /
// Enter second number: 6
// Result = 0.833333

// Q3. Menu-driven program using switch

// 1 → Area of circle
// 2 → Circumference of circle
// 3 → Area of triangle
// 4 → Your choice

// #include <iostream>
// using namespace std;

// int main() {
//     int choice;
//     float radius, base, height;

//     cout << "Menu:\n";
//     cout << "1. Area of Circle\n";
//     cout << "2. Circumference of Circle\n";
//     cout << "3. Area of Triangle\n";
//     cout << "4. Your Choice\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "Enter radius: ";
//             cin >> radius;
//             cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
//             break;
//         case 2:
//             cout << "Enter radius: ";
//             cin >> radius;
//             cout << "Circumference of Circle = " << 2 * 3.14159 * radius << endl;
//             break;
//         case 3:
//             cout << "Enter base and height of triangle: ";
//             cin >> base >> height;
//             cout << "Area of Triangle = " << 0.5 * base * height << endl;
//             break;
//         case 4:
//             cout << "It's your choice" << endl;
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }

// output

// Menu:
// 1. Area of Circle
// 2. Circumference of Circle
// 3. Area of Triangle
// 4. Your Choice
// Enter your choice: 3
// Enter base and height of triangle: 4
// 6
// Area of Triangle = 12
