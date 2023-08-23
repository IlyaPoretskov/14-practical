#include <iostream>
using namespace std;

int main() {
    char desk[3][3] = {{' ', ' ', ' '},
                       {' ', ' ', ' '},
                       {' ', ' ', ' '}};

    bool places[3][3] = {{false, false, false},
                         {false, false, false},
                         {false, false, false}};

    bool isIndexTrue = false, end = false;
    for (int i = 0; i < 9; i++)
    {
        int x, y;
        char gamerName = i % 2 == 0 ? 'X':'O';
        cout << gamerName << " move: ";
        cin >> x >> y;
        while (x < 1 || x > 3 || y < 1 || y > 3 || !!places[x-1][y-1])
        {
            cout << "!!Incorrect input, try again!!\n" << gamerName << " move: ";
            cin >> x >> y;
        }
        places[x-1][y-1] = true;
        desk[x-1][y-1] = gamerName;
        cout << "\n";

        for (int k = 0; k < 3; k++) {
            for (int j = 0; j < 3; j++) {
                cout << desk[k][j];
            }
            cout << "\n";
        }
    }
    system("pause");
}