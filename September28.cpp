#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

// Creating a class for question 1
class question1 {
public:
    // Defining the method
    void myMethod() {
        float P, I, T, simple_interest, compound_interest;

        cout << "What is your principal amount?" << endl;
        cin >> P;
        cout << "What is the annual interest rate?" << endl;
        cin >> I;
        cout << "How many years are you investing for?" << endl;
        cin >> T;

        // Calculate simple interest
        simple_interest = (((I / 100) * P) * T) + P;
        cout << "Your amount using simple interest after " << T << " years would be ---> $" << simple_interest << endl;

        // Calculate compound interest
        compound_interest = P * pow((1 + I/100), T);
        cout << "Your amount using compound interest after " << T << " years would be ---> $" << compound_interest << endl;
    }
};

// Creating a class for question 2
class question2 {
public:
    // Defining the method
    void myMethod() {
        double num1, num2, holder;

        cout << "Please enter your first number" << endl;
        cin >> num1;
        cout << "Please enter your second number" << endl;
        cin >> num2;

        // Swap the values of num1 and num2
        holder = num2;
        num2 = num1;
        num1 = holder;

        cout << "The new value of the first number is " << num1 << endl;
        cout << "The new value of the second number is " << num2 << endl;
    }
};

// Creating a class for question 3
class question3 {
public:
    // Defining the method
    void myMethod() {
        double num1, num2;

        cout << "Please enter your first number: ";
        cin >> num1;
        cout << "Please enter your second number: ";
        cin >> num2;

        // Swap the values of num1 and num2 without using a temporary variable
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        cout << "The new value of the first number is " << num1 << endl;
        cout << "The new value of the second number is " << num2 << endl;
    }
};

// Creating a class for question 4
class question4 {
public:
    // Defining the method
    void myMethod() {
        cout << "Size of char: " << sizeof(char) << " bytes" << endl;
        cout << "Size of int: " << sizeof(int) << " bytes" << endl;
        cout << "Size of float: " << sizeof(float) << " bytes" << endl;
        cout << "Size of double: " << sizeof(double) << " bytes" << endl;
        cout << "Size of long: " << sizeof(long) << " bytes" << endl;
        cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    }
};

// Creating a class for question 5
class question5 {
public:
    // Defining the method
    void myMethod() {
        int a;

        cout << "Enter the value ?: " << endl;
        cin >> a;

        // Increment and decrement operators
        a++;
        cout << "After incrementing A by one ---> " << a << endl;

        a--;
        a--;
        cout << "After decrementing A by one ---> " << a << endl;
    }
};

// Creating a class for question 6
class question6 {
public:
    // Defining the method
    void myMethod() {
        string name;
        double mark1, mark2, mark3, mark4, mark5;
        double average;

        cout << "What is your name?" << endl;
        cin.ignore(); // Ignore newline character from previous input
        getline(cin, name); // Read a line of text including spaces

        cout << "Enter your first mark?" << endl;
        cin >> mark1;
        cout << "Enter the second mark?" << endl;
        cin >> mark2;
        cout << "Enter your third mark?" << endl;
        cin >> mark3;
        cout << "Enter your fourth mark?" << endl;
        cin >> mark4;
        cout << "Enter your fifth mark?" << endl;
        cin >> mark5;

        // Calculate the average
        average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
        cout << "The mark average of " << name << " is " << average << "%" << endl;
    }
};

// Main Function
int main() {
    // Create objects of each question class and call their methods
    question1 myObj1;
    myObj1.myMethod();
    question2 myObj2;
    myObj2.myMethod();
    question3 myObj3;
    myObj3.myMethod();
    question4 myObj4;
    myObj4.myMethod();
    question5 myObj5;
    myObj5.myMethod();
    question6 myObj6;
    myObj6.myMethod();
}
