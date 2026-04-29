#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int choice, x, pos;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Size\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element: ";
                cin >> x;
                v.push_back(x);
                break;

            case 2:
                if(v.empty()) {
                    cout << "Vector is empty\n";
                } else {
                    cout << "Enter position to delete (0 to " << v.size()-1 << "): ";
                    cin >> pos;

                    if(pos >= 0 && pos < v.size()) {
                        v.erase(v.begin() + pos);
                    } else {
                        cout << "Invalid position\n";
                    }
                }
                break;

            case 3:
                if(v.empty()) {
                    cout << "Vector is empty\n";
                } else {
                    cout << "Elements: ";
                    for(int i = 0; i < v.size(); i++) {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Size: " << v.size() << endl;
                break;

        }

    } while(choice != 5);

    return 0;
}
