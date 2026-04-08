#include <bits/stdc++.h>
using namespace std;

int main() {
    // Windows PowerShell 환경에서도 고속 입출력 보장
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n;
    cin >> n;
    
    int k = n / 3;
    
    // (k-1)C2 계산
    cout << (k - 1) * (k - 2) / 2 << '\n';
    
    return 0;
}
