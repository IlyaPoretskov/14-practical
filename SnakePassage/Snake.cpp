#include <iostream>
using namespace std;

void output_matrix(int m[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << m[i][j] << "\t";
        } 
        cout << endl;
    }
}

void snake_matrix(int m[5][5]) {
    int multiplier = 1;
    int jd = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][jd];
            jd += multiplier;
        }
        multiplier *= -1;
        jd += multiplier;
    }
}

int main() {
    int matrix[5][5];

    cout << "Input matrix elements:\n\n";
    snake_matrix(matrix);
    cout << "\n\n\n";
    output_matrix(matrix);
    cout << "\n";
    system("pause");
}