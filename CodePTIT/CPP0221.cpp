#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int n, int m) {
    int top = 0, bottom = n-1, left = 0, right = m-1;
    
    while (top < bottom && left < right) {
        int prev = matrix[top+1][left];
        
        // Di chuyển hàng trên cùng (top row)
        for (int i = left; i <= right; i++) {
            int current = matrix[top][i];
            matrix[top][i] = prev;
            prev = current;
        }
        top++;
        
        // Di chuyển cột bên phải (right column)
        for (int i = top; i <= bottom; i++) {
            int current = matrix[i][right];
            matrix[i][right] = prev;
            prev = current;
        }
        right--;
        
        // Di chuyển hàng dưới cùng (bottom row)
        for (int i = right; i >= left; i--) {
            int current = matrix[bottom][i];
            matrix[bottom][i] = prev;
            prev = current;
        }
        bottom--;
        
        // Di chuyển cột bên trái (left column)
        for (int i = bottom; i >= top; i--) {
            int current = matrix[i][left];
            matrix[i][left] = prev;
            prev = current;
        }
        left++;
    }
}

void printMatrix(vector<vector<int>>& matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        // cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        
        rotateMatrix(matrix, n, m);
        printMatrix(matrix, n, m);
        cout << endl;
    }
    
    return 0;
}
