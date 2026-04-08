#include <iostream>

using namespace std;

int main(void){
    int m=3;
    while(m--){
        static int i=1;
        cout<<i<<' ';
        i++;
    }
    cout<<"\n";
}