#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s) {
    if(s.empty()) {
        cout << "Stack is empty\n";
        return;
    }

    cout << "Stack elements (top to bottom): ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    int choice, x;

    do {
        cout << "\n1. Push\n2. Pop\n3. Top\n4. Size\n5. Display\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element: ";
                cin >> x;
                s.push(x);
                break;

            case 2:
                if(s.empty())
                    cout << "Stack is empty\n";
                else {
                    cout << "Popped: " << s.top() << endl;
                    s.pop();
                }
                break;

            case 3:
                if(s.empty())
                    cout << "Stack is empty\n";
                else
                    cout << "Top element: " << s.top() << endl;
                break;

            case 4:
                cout << "Size: " << s.size() << endl;
                break;

            case 5:
                display(s);
                break;
        }

    } while(choice != 6);

    return 0;
}
