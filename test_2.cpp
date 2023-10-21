#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValidWord(const vector<vector<char>>& matrix, const string& word) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // Check if word can be formed horizontally
            bool horizontalMatch = true;
            for (int k = 0; k < word.length(); ++k) {
                if (j + k >= m || matrix[i][j + k] != word[k]) {
                    horizontalMatch = false;
                    break;
                }
            }
            if (horizontalMatch)
                return true;

            // Check if word can be formed vertically
            bool verticalMatch = true;
            for (int k = 0; k < word.length(); ++k) {
                if (i + k >= n || matrix[i + k][j] != word[k]) {
                    verticalMatch = false;
                    break;
                }
            }
            if (verticalMatch)
                return true;
        }
    }

    return false;
}

int main() {
    int n, m, q;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    cin >> q;
    while (q--) {
        string carving;
        cin >> carving;
        bool isValid = false;

        for (int i = 0; i < carving.length(); ++i) {
            if (!isalpha(carving[i])) {
                isValid = false;
                break;
            }
            carving[i] = tolower(carving[i]);
        }

        if (isValidWord(matrix, carving))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
