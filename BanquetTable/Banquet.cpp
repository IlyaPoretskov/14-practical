#include <iostream>
using namespace std;

int main() {
    int tableware[2][6] = {{3, 3, 3, 3, 3, 3}, 
                           {3, 3, 4, 4, 3, 3}};

    int plates[2][6]   =  {{2, 2, 2, 2, 2, 2}, 
                           {2, 2, 3, 3, 2, 2}};

    int chairs[2][6]   =  {{1, 1, 1, 1, 1, 1}, 
                           {1, 1, 1, 1, 1, 1}};
    
    chairs[0][4]++;
    tableware[1][3]--;
    plates[1][3]--;
}