//This pointer with operator overloading with all operators

#include <iostream>
#include <iterator>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) {
        this->value = v; // Using 'this' to refer to the current object
    }

    // Display function
    void display() const {
        cout << "Value: " << this->value << endl;
    }

    // Overload + operator
    Number operator+(const Number& other) const {
        Number temp;
        temp.value = this->value + other.value;
        return temp;
    }

    // Overload == operator
    bool operator==(const Number& other) const {
        return this->value == other.value;
    }

    // Overload = operator
    Number& operator=(const Number& other) {
        if (this != &other) { // Avoid self-assignment
            this->value = other.value;
        }
        return *this;
    }

    // Overload ++ (prefix)
    Number& operator++() {
        ++this->value;
        return *this;
    }

    // Overload ++ (postfix)
    Number operator++(int) {
        Number temp = *this;
        this->value++;
        return temp;
    }
    
    // Friend functions for stream operators
    friend ostream& operator<<(ostream& out, const Number& n);
    friend istream& operator>>(istream& in, Number& n);
};

// Overload << operator
ostream& operator<<(ostream& out, const Number& n) {
    out << n.value;
    return out;
}

// Overload >> operator
istream& operator>>(istream& in, Number& n) {
    in >> n.value;
    return in;
}

// Main function
int main() {
    Number n1(5), n2(10), n3;

    cout << "Enter value for n3: ";
    cin >> n3;

    cout << "\n--- Demonstrating operators ---\n";

    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << endl;

    Number sum = n1 + n2;
    cout << "n1 + n2 = " << sum << endl;

    cout << "n1 == n2 ? " << (n1 == n2 ? "True" : "False") << endl;

    n3 = n1;
    cout << "After assignment n3 = n1, n3 = " << n3 << endl;

    cout << "Prefix ++n1 = " << ++n1 << endl;
    cout << "Postfix n1++ = " << n1++ << endl;
    cout << "After postfix, n1 = " << n1 << endl;

    return 0;
}


// output


// Enter value for n3: 7

// --- Demonstrating operators ---
// n1 = 5, n2 = 10, n3 = 7
// n1 + n2 = 15
// n1 == n2 ? False
// After assignment n3 = n1, n3 = 5
// Prefix ++n1 = 6
// Postfix n1++ = 6
// After postfix, n1 = 7