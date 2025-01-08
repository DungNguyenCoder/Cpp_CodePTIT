#include <iostream>
using namespace std;

long long sumMod(long long N, long long K) {
    if (K == 0) return 0;
    long long S_full = (K * (K - 1)) / 2; // Tổng chu kỳ đầy đủ
    long long full_cycles = N / K;
    long long remainder = N % K;
    long long S = full_cycles * S_full;
    S += (remainder * (remainder + 1)) / 2;
    return S;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        cout << sumMod(N, K) << endl;
    }
    return 0;
}
