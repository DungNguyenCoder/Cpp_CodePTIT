#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 100;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        int A[MAX_N][MAX_N];
        int rowSum[MAX_N] = {0}, colSum[MAX_N] = {0};
        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < N; ++j) 
            {
                cin >> A[i][j];
                rowSum[i] += A[i][j];
                colSum[j] += A[i][j];
            }
        }
        int maxSum = 0;
        for (int i = 0; i < N; ++i) 
        {
            maxSum = max(maxSum, rowSum[i]);
            maxSum = max(maxSum, colSum[i]);
        }
        int result = 0;
        for (int i = 0; i < N; ++i) 
        {
            result += (maxSum - rowSum[i]);
        }

        cout << result << endl;
    }

    return 0;
}
