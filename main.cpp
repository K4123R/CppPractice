#include <iostream>

using namespace std;

int main() 
{
    int v1 = 0, v2 = 0;
    cout << "Enter two numbers: " << endl;
    cin >> v1 >> v2; 
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

    cout << "///////////////////////////////////1.2//////////////////////////////////////////" << endl;

    //1.2 Excercises
    /* 1. Write a program to pring "Hello World" on the standard output */
    cout << "Hello World" << endl;

    /* 2. Our program used the addition operator, +, to add two numbers. Write a program that
            uses the multiplication operator, *, to print the product instead. */
    int v3 = 0, v4 = 0;
    cout << "Enter two numbers:" << endl;
    cin >> v3 >> v4;
    cout << "The product of " << v3 << " and " << v4 << " is " << v3 * v4 << endl;

    /* 3. We wrote the output in one large statement. Rewrite the program to use a seperate
            statement to print each operand. */
    cout << "The product of: " << "\n" << v3 << " and \n" << v4 << " is \n" << v3 * v4 << endl; 

    cout << "////////////////////////////////////////////////////////////////////////////////" << endl;
}