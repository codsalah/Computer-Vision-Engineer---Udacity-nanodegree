#include <iostream>
#include <vector>

using namespace std;

vector<vector<float>> zeros(int rows, int cols) {
    return vector<vector<float>>(rows, vector<float>(cols, 0.0));
}

vector<vector<float>> normalize(const vector<vector<float>>& input) {
    int rows = input.size();
    int cols = input[0].size();
    vector<vector<float>> normalized(rows, vector<float>(cols, 0.0));
    float sum = 0.0;
    
    // Calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += input[i][j];
        }
    }
    
    // Normalize
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            normalized[i][j] = input[i][j] / sum;
        }
    }
    
    return normalized;
}

bool close_enough(const vector<vector<float>>& a, const vector<vector<float>>& b) {
    int rows = a.size();
    int cols = a[0].size();
    
    // Check if dimensions match
    if (rows != b.size() || cols != b[0].size())
        return false;
    
    // Check element-wise closeness
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (abs(a[i][j] - b[i][j]) > 0.0001) // Tolerance for comparison
                return false;
        }
    }
    
    return true;
}

void show_grid(const vector<vector<float>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

bool test_normalize() {
    // Declare several variables on one line
    vector<vector<float>> unnormalized, normalized, result;

    unnormalized = zeros(2, 2);
    normalized = zeros(2, 2);

    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            unnormalized[i][j] = 1.0;
            normalized[i][j] = 0.25;
        }
    }

    result = normalize(unnormalized);

    bool correct;
    correct = close_enough(normalized, result);

    if (correct) {
        cout << "! - normalize function worked correctly!\n";
    } else {
        cout << "X - normalize function did not work correctly.\n";
        cout << "For the following input:\n\n";
        show_grid(unnormalized);
        cout << "\nYour code returned the following:\n\n";
        show_grid(result);
        cout << "\nWhen it should have returned the following:\n";
        show_grid(normalized);
    }
    return correct;
}

int main() {
    test_normalize();
    return 0;
}
