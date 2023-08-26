#include <iostream>
using namespace std;

void pop(bool m[12][12], int x1, int y1, int x2, int y2) {
    for (int i = x1; i < x2 + 1; i++) {
        for (int j = y1; j < y2 + 1; j++) {
            if (m[i][j]) {
                m[i][j] = false;
                cout << "Pop ";
            }
        } 
    }
}

void initialize_alltrue(bool m[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            m[i][j] = true;
        }
    }
}

void output_bubbles(bool m[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (m[i][j]) {
                cout << "o ";
            } else {
                cout << "x ";
            }
        }
        cout << endl;
    }
}

bool ispoped(bool m[12][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (m[i][j]) return false;
        }
    }
    return true;
}

int main() {
    bool m[12][12];
    initialize_alltrue(m);
    bool end = true;
    while (end) {
        int x1, y1, x2, y2;

        cout << "\n\nBubble wrap:\n\n";
        output_bubbles(m);

        cout << "\nInput start x and y: ";
        cin >> x1 >> y1;
        cout << "\nInput end x and y: ";
        cin >> x2 >> y2;

        while (x1 < 0 || x1 > 11 || y1 < 0 || y1 > 11 || x2 < 0 || x2 > 11 || y2 < 0 || y2 > 11 || x2 < x1 || y2 < y1) {
            cout << "Incorrect input, try again.\n";

            cout << "\nInput start x and y: ";
            cin >> x1 >> y1;
            cout << "\nInput end x and y: ";
            cin >> x2 >> y2;
        }

        pop(m, x1, y1, x2, y2);
        if (ispoped(m)) {
            end = false;
        }
    }

    cout << "\nWhole wrap poped.\n";
    system("pause");
}