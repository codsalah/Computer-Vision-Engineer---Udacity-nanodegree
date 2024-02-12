#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> myvector(5);
    myvector[0] = 3.0;
    myvector[1] = 1.0; 
    myvector[2] = 2.7;
    myvector[3] = 8.2;
    myvector[4] = 7.9;
    // std::vector<int> myvector (10, 6);
    //The code will declare a vector with ten elements, and each element will have the value 6.
    
    for (int i = 0; i < myvector.size(); i++) { 
        cout << myvector[i] << " "; 
    }
    cout << endl;

    return 0;

}