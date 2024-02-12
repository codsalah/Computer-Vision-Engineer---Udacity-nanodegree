#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<float> example;

    for (int i = 0; i < 5; i++) {
        example.push_back(i*5.231);
    }

    for (int i = 0; i < example.size(); i++) {
        cout << example[i] << endl;
    }

    return 0;
}