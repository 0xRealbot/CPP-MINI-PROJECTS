
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "\n===== 0xRealbot Calculator =====\n";

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /, %): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2;
                break;

            case '-':
                cout << "Result: " << num1 - num2;
                break;

            case '*':
                cout << "Result: " << num1 * num2;
                break;

            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2;
                else
                    cout << "Error: Division by zero!";
                break;

            case '%':
                if (num1 == (int)num1 && num2 == (int)num2 && num2 != 0)
                    cout << "Result: " << (int)num1 % (int)num2;
                else
                    cout << "Modulus requires whole numbers and a non-zero divisor!";
                break;

            default:
                cout << "Invalid operator!";
        }

        cout << "\nCalculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using 0xRealbot Calculator!\n";

    return 0;
}
