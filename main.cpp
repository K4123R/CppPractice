#include <iostream>

using namespace std;

//Method Declarations
bool sumOfNumber(int start, int end);
int forLoop(int start, int end);
int whileLoop(int start, int end);

int main() 
{
//     int v1 = 0, v2 = 0;
//     cout << "Enter two numbers: " << endl;
//     cin >> v1 >> v2; 
//     cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

//     cout << "///////////////////////////////////1.2//////////////////////////////////////////" << endl;

//     //1.2 Excercises
//     /* 1. Write a program to pring "Hello World" on the standard output */
//     cout << "Hello World" << endl;

//     /* 2. Our program used the addition operator, +, to add two numbers. Write a program that
//             uses the multiplication operator, *, to print the product instead. */
//     int v3 = 0, v4 = 0;
//     cout << "Enter two numbers:" << endl;
//     cin >> v3 >> v4;
//     cout << "The product of " << v3 << " and " << v4 << " is " << v3 * v4 << endl;

//     /* 3. We wrote the output in one large statement. Rewrite the program to use a seperate
//             statement to print each operand. */
//     cout << "The product of: " << "\n" << v3 << " and \n" << v4 << " is \n" << v3 * v4 << endl; 

//     cout << "////////////////////////////////////////////////////////////////////////////////" << endl;

    int start = 0, end = 0;
    cout << "Enter 2 numbers: " << endl;
    cin >> start;
    cin >> end;
    cout << "The sum of the numbers between " << start << " and " << end << " are "  << sumOfNumber(start, end);
}

bool sumOfNumber(int a, int b) 
{
        int resultA = 0, resultB = 0;
        resultA = forLoop(a, b);   
        resultB = whileLoop(a, b);
        if(forLoop != whileLoop)
                return false;
        else 
                return true;   
}

int forLoop(int a, int b) 
{
        int sum = 0;
        if(a == b)
        {
                return 0;
        }
        else if(a < b) 
        {
                for(int i = a; a <= b; a++) 
                {
                        sum = sum + a;
                }
                return sum;
        }
        else 
        {
                for(int i = b; b >= a; b++) 
                {
                        sum += b;
                }
                return sum;
        } 
        return 0;
}

int whileLoop(int a, int b) 
{
        if(a == b)
        {
                return 0;
        }
        else
        {
                int sum = 0;
                if(a < b)
                {
                        while (a < b)
                        {
                                sum += a;
                                a++;
                        }
                        return sum;
                }
                else if(b < a)
                {
                        while (b < a)
                        {
                                sum += b;
                                b++;
                        }
                        return sum;
                }
                
        }
}