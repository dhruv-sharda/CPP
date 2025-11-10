// Write a program to create a function which checks if x^m is given or not (various conditions).

//1.The sub-questions are:

//2.Fibonacci series

//3.Armstrong number

//4.Palindrome

//5.prime number

//6.Calculate power

//7.Factorial

#include <iostream>
#include <cmath>
using namespace std;

// 1. Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// 2. Armstrong number
bool isArmstrong(int n) {
    int sum = 0, temp = n;
    int digits = log10(n) + 1;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

// 3. Palindrome
bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

// 4. Prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 5. Calculate Power
long long power(int x, int m) {
    long long result = 1;
    for (int i = 0; i < m; i++) result *= x;
    return result;
}

// 6. Factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

// 7. Maximum of two numbers
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Main function
int main() {
    int choice, num, num2;

    cout << "Menu:\n";
    cout << "1. Fibonacci series\n2. Armstrong number\n3. Palindrome\n4. Prime\n5. Power\n6. Factorial\n7. Maximum\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number of terms: ";
            cin >> num;
            fibonacci(num);
            break;
        case 2:
            cout << "Enter number: ";
            cin >> num;
            cout << (isArmstrong(num) ? "Armstrong number" : "Not Armstrong") << endl;
            break;
        case 3:
            cout << "Enter number: ";
            cin >> num;
            cout << (isPalindrome(num) ? "Palindrome" : "Not Palindrome") << endl;
            break;
        case 4:
            cout << "Enter number: ";
            cin >> num;
            cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
            break;
        case 5:
            cout << "Enter base and power: ";
            cin >> num >> num2;
            cout << "Result = " << power(num, num2) << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> num;
            cout << "Factorial = " << factorial(num) << endl;
            break;
        case 7:
            cout << "Enter two numbers: ";
            cin >> num >> num2;
            cout << "Maximum = " << maximum(num, num2) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}

// output

// Menu:
// 1. Fibonacci series
// 2. Armstrong number
// 3. Palindrome
// 4. Prime
// 5. Power
// 6. Factorial
// 7. Maximum
// Enter your choice: 6
// Enter number: 45
// Factorial = -8797348664486920192