//TODO: include the iostream and vector libraries
#include<iostream>
#include<vector>


//TODO: Use the standard namespace
using namespace std;

int main() {
    
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print 
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    vector<int> MyList(3, 5);
    for (int i=0;i < MyList.size() ; i++){
        cout << MyList[i] << " ";
    }
    cout << endl;
    // Part 2: Use push back to add the values 3.0, 2.5, 1.4 
    //      to the back of the vector
    MyList.push_back(3.0);
    MyList.push_back(2.5);
    MyList.push_back(1.4);
    // Part 3: Print out the vector again using cout
    for (int i = 0; i < MyList.size(); i++) {
        cout << MyList[i] << " ";
    }
    cout << "\n";
    // Part 4: Use the vector assign method to override the current vector. 
    // The overriden vector should have 3 elements with 
    // the values {5.0, 5.0, 5.0}
    MyList.assign(3, 5.0);
        for (int i = 0; i < MyList.size(); i++) {
        cout << MyList[i] << " ";
    }
    
    cout << "\n";// Part 5: Print out the vector

    return 0;
}

// output 
// 5 5 5 
// 5 5 5 3 2 1 
// 5 5 5 