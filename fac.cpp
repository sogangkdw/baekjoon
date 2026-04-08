#include <iostream>
using namespace std;

int fac(int n, int &k) {
    k++;
    if(n == 0) {
        return 1;
    }
    else {
        return n * fac(n - 1, k);
    }
}

int main(void) {
    int n = 4;
    int k = 0;

    cout << "Factorial: " << fac(n, k) << endl;
    cout << "Function was called " << k << " times" << endl;

    return 0;
}
