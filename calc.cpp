

#include <iostream>
using namespace std;

int main() {

    //declare variables to store user input
    double num1, num2;
    //variable to store operator that user enters
    char op;

    //ask user to enter the operator
    cout << "Enter the operator ( + - * / ) : ";
    cin >>  op;

    //ask user to enter the two numbers
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    //Implement calculator using switch statements
    switch ( op )
    {
        case '+':
        cout << num1 << op << num2 << " = " << num1 + num2 << endl;
        break;

           case '-':
        cout << num1 << op << num2 << " = " << num1 - num2 << endl;
        break;

           case '*':
        cout << num1 << op << num2 << " = " << num1 * num2 << endl;
        break;

           case '/':
           if ( num2 == 0.0)
           {
            cout << "Divide by 0 situation" << endl;
           }
           else{
             cout << num1 << op << num2 << " = " << num1 / num2 << endl;
           }
           break;

   default:
     cout << "Invalid Operator" << endl;
    }

}