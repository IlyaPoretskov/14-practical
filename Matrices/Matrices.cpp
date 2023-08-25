#include <iostream>
using namespace std;

void input_matrix(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> m[i][j];
        }  
    }
}

void output_matrix(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

void convert_to_diagonal(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) m[i][j] = 0;
        }
    }  
}

bool are_equal(int a[4][4], int b[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int a[4][4];
    int b[4][4];
    cout << "Input 'a' matrix:\n";
    input_matrix(a);
    cout << "Input 'b' matrix:\n";
    input_matrix(b);
    
    if (are_equal(a, b)) {
        cout << "The matrices are equal.\n\n";
        cout << "\nIntial matrix:\n\n";
        output_matrix(a);
        cout << "\nConverted matrix:\n\n";
        convert_to_diagonal(a);
        output_matrix(a);
    } else {
        cout << "\nThe matrices aren't equal.\n\nThe first matrix:\n\n";
        output_matrix(a);
        cout << "\nThe second matrix:\n\n";
        output_matrix(a);
    }
    cout << endl;
    system("pause");
}