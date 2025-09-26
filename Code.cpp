#include <iostream>

using namespace std;

int main() {
    int a ;
    cout << "Enter you first number : ";
    cin >> a;

    int b ;
    cout << "enter your second number : ";
    cin >> b;
    
    char c ;
    cout << "enter your operator : ";
    cin >> c ;

    switch (c) {
    case '+':
        cout << "Result: " << a + b << endl;
        break;

    case '-':
        cout << "Result : " << a - b << endl;
        break;
    
    case '*':
        cout << "Result : " << a * b << endl;
        break;

    case '/':
        cout << "Result : " << a / b << endl;
        break;

    default:
        cout << "Invalid operator" << endl;
    }

}