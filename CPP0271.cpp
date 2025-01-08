#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> buildPrefixSum(const vector<vector<int>>& image, int N, int M) {
    vector<vector<int>> prefix(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            prefix[i][j] = image[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }
    
    return prefix;
}

int getSum(const vector<vector<int>>& prefix, int x1, int y1, int x2, int y2) {
    x1 = max(1, x1);
    y1 = max(1, y1);
    x2 = min((int)prefix.size() - 1, x2);
    y2 = min((int)prefix[0].size() - 1, y2);
    
    return prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];
}

vector<vector<int>> smoothImage(const vector<vector<int>>& image, int N, int M, int L) {
    int k = L / 2;
    vector<vector<int>> result(N, vector<int>(M, 0));
    
    vector<vector<int>> prefix = buildPrefixSum(image, N, M);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int x1 = i - k + 1;
            int y1 = j - k + 1;
            int x2 = i + k + 1;
            int y2 = j + k + 1;
            
            int sum = getSum(prefix, x1, y1, x2, y2);
            int count = (x2 - x1 + 1) * (y2 - y1 + 1);
            
            result[i][j] = sum / count;
        }
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M, L;
        cin >> N >> M >> L;
        
        vector<vector<int>> image(N, vector<int>(M));
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> image[i][j];
            }
        }
        
        vector<vector<int>> result = smoothImage(image, N, M, L);
        
        for (int i = L/2; i < N - L/2; ++i) {
            for (int j = L/2; j < M - L/2; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}