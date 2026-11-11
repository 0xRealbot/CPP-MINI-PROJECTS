
#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    double amount;
    int choice;

    do {
        cout << "\n===== BANKING SIMULATION =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: Rs. " << balance << "\n";
                break;

            case 2:
                cout << "Enter deposit amount: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful!\n";
                }
                break;

            case 4:
                cout << "Thank you for using our bank!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
