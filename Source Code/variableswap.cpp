#include <iostream>
using namespace std;

int main()
{
    // program for swapping values of two variables
    int a = 20;
    int b = 10;

    // swap the variables using a temp variable
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;
}