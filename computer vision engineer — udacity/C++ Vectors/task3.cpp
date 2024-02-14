#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> twodvector = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int row = 0; row < twodvector.size(); row++) {
        for (int column = 0; column < twodvector[0].size(); column++) {
            cout << twodvector[row][column] << " ";
        }
        cout << endl;
    }

    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++) {
            cout << twodvector[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}
