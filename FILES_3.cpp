#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("file1.txt");
    ofstream fout("file2.txt");
    string line;

    while(getline(fin, line)) {
        fout << line << endl;
    }

    fin.close();
    fout.close();

    cout << "File copied successfully";

    return 0;
}
