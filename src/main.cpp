#include <iostream>

using namespace std;

int x;
int y;
char z;
int sum;

// This code is just me trying to learn how to use C++. I have no idea how to check whether x or y is a number yet. (I've heard of isdigit(x) but that hasn't worked yet)
// Also, large numbers seem to break this (probably because of limits and stuff)

void calculate() 
{
    if (z == '+')
    {
        sum = x + y;
    }
    else if (z == '*')
    {
        sum = x * y;
    }
    else if (z == '/')
    {
        sum = x / y;
    }
    else if (z == '-')
    {
        sum = x - y;
    }
    
    cout << sum;
}

int main()
{
    cout << "Input number 1: ";
    cin >> x;
    
    cout << "Input number 2: ";
    cin >> y;
    
    cout << "Input operation: ";
    cin >> z;

    if (z == '+' or z == '*' or z == '/' or z == '-')
    {
        if (y == 0 and z == '/')
        {
            cout << "Cannot divide by 0!";
            return 0;
        }
        calculate();
        return 0;
    }
    else
    {
        cout << "Not good";
        return 0;
    }
}