#include<iostream>
using namespace std;

int main() {
    int n;
    int pos = -1;
    const int Max = 20;
    int a[Max];

    cout << "Enter number of initial elements for the stack (max 20): ";
    cin >> n;

    if (n > Max) {
        cout << "Cannot insert more than 20 elements. Exiting...\n";
        return 0;
    }

    cout << "Enter elements in stack:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        pos++;
        a[pos] = val;
    }

    int ch;

    do {
        cout << "\n\n";
        cout << "ENTER YOUR CHOICE:\n";
        cout << "1. ADD ELEMENTS IN STACK\n";
        cout << "2. DELETE ELEMENTS IN STACK\n";
        cout << "3. PRINT ELEMENTS IN STACK\n";
        cout << "4. EXIT\n";
        cout << "\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                if (pos == Max - 1) {
                    cout << "Stack Overflow! Cannot add more elements.\n";
                } else {
                    int e;
                    cout << "Element to be entered: ";
                    cin >> e;
                    pos++;
                    a[pos] = e;
                    cout << "Element added.\n";
                }
                break;
            }

            case 2: {
                if (pos == -1) {
                    cout << "Stack Underflow! No elements to delete.\n";
                } else {
                    cout << "Element deleted is: " << a[pos] << "\n";
                    pos--;
                }
                break;
            }

            case 3: {
                if (pos == -1) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Elements in the stack (from top to bottom): ";
                    for (int i = pos; i >= 0; i--) {
                        cout << a[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            }

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "INVALID INPUT! Please enter a valid option.\n";
        }

    } while (ch != 4);

    return 0;
}

