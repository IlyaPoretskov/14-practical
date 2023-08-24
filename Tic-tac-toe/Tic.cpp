#include <iostream>
using namespace std;

int main() {
    cout << endl;
    char desk[3][3] = {{' ', ' ', ' '},
                       {' ', ' ', ' '},
                       {' ', ' ', ' '}};

    bool places[3][3] = {{false, false, false},
                         {false, false, false},
                         {false, false, false}};

    bool end = false, win = false;
    for (int i = 0; i < 9 && end == false; i++)
    {
        int x, y;
        char gamerName = i % 2 == 0 ? 'X':'O';
        string winName = {gamerName, gamerName, gamerName};
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

        string storageA = "", storageB = "";
        string diagA = {desk[0][0], desk[1][1], desk[2][2]};
        string diagB = {desk[0][2], desk[1][1], desk[2][0]};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                storageA += desk[i][j];
                storageB += desk[j][i];
            }
            if (storageA == winName || storageB == winName || diagA == winName || diagB == winName) {
                end = true;
                win = true;
                cout << gamerName << " won!\n";
                break;
            }
            storageA = "";
            storageB = "";
        } 
    }

    if (win == false) {
        cout << "\nDraw!\n";
    }
    
    system("pause");
}