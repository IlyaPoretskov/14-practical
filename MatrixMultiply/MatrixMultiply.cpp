#include <iostream>
#include <vector>
using namespace std;

void input_matrix(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> m[i][j];
        } 
    }
}

void input_vector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }
}

void output_vector(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int main() {
    int a[4][4];
    vector<int> b(4);
    vector<int> c(4);
    int storage = 0;

    cout << "\nInput matrix:\n";
    input_matrix(a);

    cout << "\nInput array: ";
    input_vector(b);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            storage += a[i][j] * b[i];
        }
        c[i] = storage;
        storage = 0;
    }
    cout << "\nResult: ";
    output_vector(c);
    cout << endl;
    system("pause");
}