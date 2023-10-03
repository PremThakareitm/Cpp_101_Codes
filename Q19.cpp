#include <iostream>
using namespace std;

double accountBalance = 0;

void displayBalance() {
    cout << "Your account balance is: Rs" << accountBalance << endl;
}

void deposit() {
    double amount;
    cout << "Enter the amount to deposit: Rs";
    cin >> amount;
    if (amount > 0) {
        accountBalance += amount;
        cout << "Deposit successful.\n";
    } else {
        cout << "Invalid amount for deposit.\n";
    }
}

void withdraw() {
    double amount;
    cout << "Enter the amount to withdraw: Rs";
    cin >> amount;
    if (amount > 0 && amount <= accountBalance) {
        accountBalance -= amount;
        cout << "Withdrawal successful.\n";
    } else {
        cout << "Invalid amount for withdrawal or insufficient funds.\n";
    }
}

int main() {
    while (true) {
        cout << "Welcome to ITM ATM Machine\n";
        cout << "1. Check Account Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdrawal\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                displayBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
