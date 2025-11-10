// Q1: Calculate the length of a string

// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     int length = 0;
//     while (str[length] != '\0') length++;

//     cout << "Length of string = " << length << endl;
//     return 0;
// }

// output

// Enter a string: my name is ambuj 
// Length of string = 16

// Q2: Accept a string and print reverse

// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);

//     int length = 0;
//     while (str[length] != '\0') length++;

//     cout << "Reversed string: ";
//     for (int i = length - 1; i >= 0; i--) {
//         cout << str[i];
//     }
//     cout << endl;

//     return 0;
// }

// output

// Enter a string: i love to play cricket
// Reversed string: tekcirc yalp ot evol i


// Q3: Copy string into another string

// #include <iostream>
// using namespace std;

// int main() {
//     char str1[100], str2[100];
//     cout << "Enter first string: ";
//     cin.getline(str1, 100);

//     int i = 0;
//     while (str1[i] != '\0') {
//         str2[i] = str1[i];
//         i++;
//     }
//     str2[i] = '\0';

//     cout << "Copied string = " << str2 << endl;
//     return 0;
// }

// output

// Enter first string: ambuj
// Copied string = ambuj


// Q4: Count words in a string

// #include <iostream>
// using namespace std;

// int main() {
//     char str[200];
//     cout << "Enter a string: ";
//     cin.getline(str, 200);

//     int words = 0, i = 0;
//     bool inWord = false;

//     while (str[i] != '\0') {
//         if (str[i] == ' ' || str[i] == '\t') {
//             inWord = false;
//         } else if (!inWord) {
//             inWord = true;
//             words++;
//         }
//         i++;
//     }

//     cout << "Number of words = " << words << endl;
//     return 0;
// }

// output

// Enter a string: i love tech so much
// Number of words = 5