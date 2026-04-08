#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int* arr;


int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    arr = new int[a];
    
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        arr[i] = abs(b - arr[i]);
    }

    sort(arr, arr + a);

    int result=arr[0];
    
    for(int i=1;i<a;i++){
        result=gcd(result,arr[i]);
    }
    cout<<result<<'\n';

    delete[] arr;

    return 0;
}
