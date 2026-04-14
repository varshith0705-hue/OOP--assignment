#include <iostream>
using namespace std;

template <class T>
void rowSum(T arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        T sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Row-wise sums:\n";
    rowSum(matrix, 2, 3);

    return 0;
}
