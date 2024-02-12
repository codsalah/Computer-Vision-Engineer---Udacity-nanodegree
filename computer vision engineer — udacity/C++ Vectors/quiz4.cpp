
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<float> example;

    // assign 5 floats with value 10
    example.assign(5,10.0);

    // print out the vector
    for (int i = 0; i < example.size(); i++) {
        cout << example[i] << endl;
    }

    // blank line outputted to terminal
    cout << endl;

    //multiply each value in the vector by 20
    for (int i = 0; i < example.size(); i++) {
        example[i] = 20 * example[i];
    }

    // print out the vector
    for (int i = 0; i < example.size(); i++) {
        cout << example[i
        ] << endl;
    }


    return 0;
}