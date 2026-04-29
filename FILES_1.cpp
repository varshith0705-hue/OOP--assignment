#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    ifstream fin;
    string text;

    // Writing to file
    fout.open("data.txt");
    cout << "Enter text: ";
    getline(cin, text);
    fout << text;
    fout.close();

    // Reading from file
    fin.open("data.txt");
    cout << "\nData from file:\n";
    getline(fin, text);
    cout << text;
    fin.close();

    return 0;
}
