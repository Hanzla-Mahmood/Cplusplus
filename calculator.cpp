#include <iostream>

using namespace std;

int main() {
    int choice = 0;
    double num1, num2, result;

    while (choice != 5) {
        cout << "\nSimple Calculator\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        if (choice == 2) {
            cout << "Enter two numbers to subtract (num1 - num2): ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        if (choice == 3) {
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        if (choice == 4) {
            cout << "Enter two numbers to divide (num1 / num2): ";
            cin >> num1 >> num2;
            if (num2 != 0)
                result = num1 / num2;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            if (num2 != 0)
                cout << "Result: " << result << endl;
        }
        if (choice == 5) {
            cout << "Exiting the program." << endl;
        }
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
